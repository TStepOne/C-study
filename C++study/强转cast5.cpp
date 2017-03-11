#include <iostream>
using namespace std;

#if 0
static_cast:对于隐式类型转化的，即可使用此类型
reinterpret_cast
const_cast:只能应用于指针引用 
dynamic_cast
#endif
void main_05()
{
	float a = 5.6;
	int b = 5;

	b = static_cast<int>(a);

}