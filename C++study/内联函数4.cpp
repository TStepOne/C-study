#include <iostream>
#include <string.h>
using namespace std;

#if 0
�ŵ㣺��Ƕ���룬����ѹջ�ͳ�ջ�Ŀ���
ȱ�㣺�����滻����ʹ���ɴ��������󣬲����߼�����
#endif

#define SQR(X) ((X)*(X))

#if 0
�ŵ㣺�߶ȳ��󣬱����ظ�����
ȱ�㣺ѹջ�ͳ�ջ����������
#endif

inline int sqr(int x)
{
	return x*x;
}


void main_04()
{

	int  i = 0;
	while(i < 5)
	{
		cout << sqr(i++) << endl;
	}
}