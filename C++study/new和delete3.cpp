#include <iostream>
#include <stdlib.h>
#include<string>
using namespace std;

// ��c�У�malloc free #include<stdlib.h>  �ǿ⺯��
// ��c++�У�new delete �ǹؼ���


// new �÷�
// 1�����ٵ�������ַ�ռ�
// 2������
void main_03()
{
#if 0
	int *p = new int; //����һ����Сsizeof��p���Ŀռ�
	int q=5;
	p = &q;
	cout << *p;
#endif

#if 0
	int *p = (int*)malloc(sizeof(int));
	int *q = new int(200);        //���ٿռ䲢��ʼ��
	cout << *q << endl;

	string *ps = new string;
	*ps = "China";
	cout << *ps << endl;

	string *pps = new string("China_2");
	cout << *pps << endl;

	struct stu
	{
		int age;
		string name;
	};
	stu *pStu = new stu{ 20,"Tom" };
	cout << pStu->age << "   " << pStu->name << endl;
#endif

#if 0
	char *p = new char[40];
	strcpy(p, "Jap");
	cout << p << endl;

	int*pi = new int[5]{ 0 };
	memset(pi, 0, sizeof(int[5]));
	for (int i = 0; i < 5; i++)
	{
		cout << pi[i] << endl;
	}

	char **ppc = new char*[5]{ NULL };

	ppc[0] = new char[10];
	strcpy(ppc[0], "Ame");
	ppc[1] = "automan";
	ppc[2] = "HelloMan";

	while (*ppc)
	{
		cout << *ppc++ << endl;
	}

	int(*pa)[4] = new int[3][4]{ {0} };
	
	for (int i = 0; i < sizeof(int[3][4]) / sizeof(int[4]); i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cout << pa[i][j]<<" ";
		}
		cout << endl;
	}

	int *p2 = new int;
	delete p2;

	int *arr = new int[100];
	delete []arr;

#endif

	//C�汾�ж��ڴ������Ƿ�ʧ��
	int *p = (int *)malloc(sizeof(int[100]));
	if (p == NULL)
	{
		cout << "malloc error." << endl;
	}

	//C++���ж��쳣
	int *q = new (std::nothrow)int[100];
	if (p == NULL)
	{
		cout << "malloc error." << endl;
	}

#if 0
	try
	{
		int *q = new int;
	}
	catch (const std::bad_alloc e)
	{
		cout << "new error:" << e.what() << endl;
	}
#endif


	return;
}