#include<iostream>
using namespace std;

// 1��������һ��������ϵ��������ʱ�����Ҫ��ʼ�������ò������ڴ�ռ�
// 2������������ϵһ�����������ɱ��
// 3�����Զ������ٴ����ã�������õĽ������ĳһ�������ж���������Ա������в����൱�ڶ�ԭ�������в�����
// 4��&����ǰ������������ʱ�������á�������Ϊȡ��ַ��   & �ڡ�=���ұ�Ϊȡ��ַ��

//int main()
//{
//	int a, b;
//	int &r = a;
//	int &r = b;//���󣬲��ɸ���ԭ�е����ù�ϵ
//	float &rr = a;//�����������Ͳ�ƥ��
//	cout << &r << &a<< endl;
//	int &rr = r;//���Զ������ٴ����ã���ʾa���������� �������ֱ���r��rr
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

//ƽ���ڽ�����⣬�����ٶ���ռ�
//���õı����Ƕ�ָ����ٴΰ�װ��ָ���������õģ����ɶ�����ȡ��ַ����û�С�
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
	int a = 500;      //��������ʵ����һ���ڴ�ռ�ı���
	//*(int *) 0x000000023=500;

	int &ra = a;

	printf("sizeof(a)=%d, sizeof(ra)=%d \n", sizeof(a), sizeof(ra));
	printf("&a=%p,&ra=%p \n", &a, &ra);

	a = 1000;
	printf("a=%d,ra=%d \n", a, ra);
	ra = 2000;
	printf("a=%d,ra=%d \n", a, ra);

	int b = 200;
	ra = b; //��ֵ����
	//int &ra=b;//����
	printf("a=%d,ra=%d \n", a, ra);

	int &rr = ra;
	printf("rr=%d,ra=%d \n", rr, ra);


	char *p = "china";//ָ������� char* &rp=p;
	char *q = "jap";

	cout << "p=" << p << ",q=" <<q<<endl;
	swap(p, q);
	//swap(&p,&q);
	cout << "p=" << p << ",q=" << q << endl;
	return;
}