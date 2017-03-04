#include<iostream>
using namespace std;

// 1、可以定义指针的引用，但不能定义引用的引用
// 2、可以定义指针的指针（二级指针），但不能定义引用的指针
// 3、可以定义指针数组，但不能定义引用的数组，可以定义数组引用

// 1、const对象的引用必须是const的，将普通引用绑定到const对象是不合法的
// 2、const引用可使用相关类型的对象（常量，非同类型的变量或表达式）初始化
void main()
{
#if 0
	int *p;
	int **pp = &p;
	int * &rp = p;//引用的指针
	
	int a;
	int &ra = a;
	//int &&rra = ra;//引用的引用

	//int& *pra = p;//error：引用的指针

	int x, y, z;
	int* parr[] = { &x,&y,&z };//ok,指针数组
	//int& rarr[] = {x,y,z};  //error,引用数组，rp为首地址，int& *___不可以定义引用的指针
	int arr[] = { 1,2,3 };    //数组首地址类型为int *,arr等价于

	//int * &arr = arr;    
	//int &rarr[3]=arr;    //引用的数组 
	int(&arr)[3] = arr;      //ok，数组引用
#endif

#if 0
	const int a = 100;
	//int *q = &a; //将普通引用绑定到const对象是不合法的
	const int *p = &a;
	//int &ra = a; //const对象的引用必须是const的
	const int &ra = a;
#endif
	int a;
	//double &ra = a; 
	//double &ra = a+6;

	const double &ra = a;
	const double &ra = a + 6;
}