#include<iostream>
using namespace std;

// 1、引用是一种声明关系，声明的时候必须要初始化，引用不开辟内存空间
// 2、此种声明关系一经声明，不可变更
// 3、可以对引用再次引用，多次引用的结果，是某一变量具有多个别名。对别名进行操作相当于对原变量进行操作。
// 4、&符号前面有数据类型时，是引用。其他结为取地址。   & 在“=”右边为取地址。

//int main()
//{
//	int a, b;
//	int &r = a;
//	int &r = b;//错误，不可更改原有的引用关系
//	float &rr = a;//错误，引用类型不匹配
//	cout << &r << &a<< endl;
//	int &rr = r;//可以对引用再次引用，表示a变量有两个 别名，分别是r和rr
//}

void swap(int *pa, int *pb)
{
	*pa ^= *pb;
	*pb ^= *pa;
	*pa ^= *pa;
}

void swap(int &pa, int &pb)
{
	pa ^= pb;
	pb ^= pa;
	pa ^= pa;
}

//平级内解决问题，不开辟多余空间
//引用的本质是对指针的再次包装。指针是有引用的，不可对引用取地址，即没有。
void swap(char* &p, char* &q)
{
	char *temp = p;
	p = q;
	q = temp;
}

void swap(char**p, char**q)
{
	char *temp = *p;
	*p = *q;
	*q = temp;
}

void main_01()
{
	int a = 500;      //变量名，实质是一段内存空间的别名
	//*(int *) 0x000000023=500;

	int &ra = a;

	printf("sizeof(a)=%d, sizeof(ra)=%d \n", sizeof(a), sizeof(ra));
	printf("&a=%p,&ra=%p \n", &a, &ra);

	a = 1000;
	printf("a=%d,ra=%d \n", a, ra);
	ra = 2000;
	printf("a=%d,ra=%d \n", a, ra);

	int b = 200;
	ra = b; //赋值操作
	//int &ra=b;//声明
	printf("a=%d,ra=%d \n", a, ra);

	int &rr = ra;
	printf("rr=%d,ra=%d \n", rr, ra);


	char *p = "china";//指针的引用 char* &rp=p;
	char *q = "jap";

	cout << "p=" << p << ",q=" <<q<<endl;
	swap(p, q);
	//swap(&p,&q);
	cout << "p=" << p << ",q=" << q << endl;
	return;
}