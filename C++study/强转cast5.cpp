#include <iostream>
using namespace std;

#if 0
static_cast:������ʽ����ת���ģ�����ʹ�ô�����
reinterpret_cast
const_cast:ֻ��Ӧ����ָ������ 
dynamic_cast
#endif
void main_05()
{
	float a = 5.6;
	int b = 5;

	b = static_cast<int>(a);

}