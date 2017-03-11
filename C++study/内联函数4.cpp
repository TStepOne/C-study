#include <iostream>
#include <string.h>
using namespace std;

#if 0
优点：内嵌代码，避免压栈和出栈的开销
缺点：代码替换，易使生成代码体积变大，产生逻辑错误
#endif

#define SQR(X) ((X)*(X))

#if 0
优点：高度抽象，避免重复开发
缺点：压栈和出栈，带来开销
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