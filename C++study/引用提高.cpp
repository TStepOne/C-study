#include<iostream>
using namespace std;

// 1�����Զ���ָ������ã������ܶ������õ�����
// 2�����Զ���ָ���ָ�루����ָ�룩�������ܶ������õ�ָ��
// 3�����Զ���ָ�����飬�����ܶ������õ����飬���Զ�����������

// 1��const��������ñ�����const�ģ�����ͨ���ð󶨵�const�����ǲ��Ϸ���
// 2��const���ÿ�ʹ��������͵Ķ��󣨳�������ͬ���͵ı�������ʽ����ʼ��
void main()
{
#if 0
	int *p;
	int **pp = &p;
	int * &rp = p;//���õ�ָ��
	
	int a;
	int &ra = a;
	//int &&rra = ra;//���õ�����

	//int& *pra = p;//error�����õ�ָ��

	int x, y, z;
	int* parr[] = { &x,&y,&z };//ok,ָ������
	//int& rarr[] = {x,y,z};  //error,�������飬rpΪ�׵�ַ��int& *___�����Զ������õ�ָ��
	int arr[] = { 1,2,3 };    //�����׵�ַ����Ϊint *,arr�ȼ���

	//int * &arr = arr;    
	//int &rarr[3]=arr;    //���õ����� 
	int(&arr)[3] = arr;      //ok����������
#endif

#if 0
	const int a = 100;
	//int *q = &a; //����ͨ���ð󶨵�const�����ǲ��Ϸ���
	const int *p = &a;
	//int &ra = a; //const��������ñ�����const��
	const int &ra = a;
#endif
	int a;
	//double &ra = a; 
	//double &ra = a+6;

	const double &ra = a;
	const double &ra = a + 6;
}