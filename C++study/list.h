#pragma once

 typedef struct s_data
{
	 char title[ 50 ];
	 int rating;
}Item;
typedef struct s_node
{
	Item item;
	s_node *next;
}NODE;

typedef NODE *List;

void InitList(List *plist);

bool ListIsEmpty(List *plist);

bool ListIsFull(List *plist);

unsigned int ListItemCount(const List *plist);

bool AddItem(Item item,List *plist);

void Traverse(const List *plist, void(*pfun)(Item item));

void EmptyTheList(List *plist);



