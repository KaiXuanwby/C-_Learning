#include "swap01.h"   //  引号表示优先访问本地资源（自己写的）

//函数的定义
void swap01(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
}