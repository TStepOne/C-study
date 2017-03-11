#include<iostream>
#include "stdio.h"
#include "stdlib.h"
#include"list.h"

using namespace std;

void showmovies(Item item)
{
	cout << item.title << "  " << item.rating << endl;
}

static void CopyToNode(Item item, NODE *pnode)
{
	pnode->item = item;
}


void InitList(List *plist)
{
	*plist = NULL;
	return;
}

bool ListIsEmpty(List *plist)
{
	if (*plist == NULL)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool ListIsFull(List *plist)
{
	return false;
}

unsigned int ListItemCount(const List *plist)
{
	unsigned int count = 0;
	NODE *pnode = *plist;
	while (pnode != NULL)
	{
		++count;
		pnode = pnode->next;
	}

	return count;
}

bool AddItem(Item item, List *plist)
{
	NODE *pnew;
	NODE *scan = *plist;
  
	pnew = (NODE *)malloc(sizeof(NODE));
	if (pnew == NULL)
		return false;

	CopyToNode(item, pnew);
	pnew->next = NULL;
	if (scan == NULL)
	{
		*plist = pnew;
	}
	else
	{
		while (scan->next != NULL)
		{
			scan = scan->next;
		}
		scan->next = pnew;
	}

	return true;
}

void Traverse(const List *plist, void(*pfun)(Item item))
{
	NODE *pnode;

	pnode = *plist;
	while (pnode != NULL)
	{
		(*pfun)(pnode->item);
		pnode = pnode->next;
	}
	return;
}

void EmptyTheList(List *plist)
{
	NODE *psave;

	while (*plist != NULL)
	{
		psave = (*plist)->next;
		free(*plist);
		*plist = psave;
	}
	return;
}


void main()
{
	List movies;
	Item temp;

	InitList(&movies);

	cout << "Enter the title:";
	while (gets_s(temp.title) != NULL&&temp.title[0] != '\0')
	{
		cout << "Enter your rating:";
		cin >> temp.rating;
		while (getchar() != '\n')
		{
			continue;
		}
		if (AddItem(temp, &movies) == false)
		{
			cout << "Add fail!" << endl;
			break;
		}
		cout << "Enter next movie title:";
	}

	if (ListIsEmpty(&movies))
	{
		cout << "No data entered." << endl;
	}
	else
	{
		cout << "Here is the movie list :" << endl;
		Traverse(&movies, showmovies);
	}
    return;
}