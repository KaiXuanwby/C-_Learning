//递增
#include<iostream>
using namespace std;

int main14()
{
	// 后置递增
	int a = 10;
	a++;   //等价于 a = a +1
	cout << "a = " << a << endl;  //11
	// 前置递增
	int b = 10;
	++b;
	cout << "b = " << b << endl; //11
	//后置与前置的区别
	//前置先对变量进行++操作，再计算表达式（调用a）
	int a2 = 10;
	int b2 = ++a2 * 10;
	cout << "a2 = " << a2 << endl;//11
	cout << "b2 = " << b2 << endl;//110
	//后置先计算表达式（调用a），后对变量进行++操作
	int a3 = 10;
	int b3 = a3++ * 10;
	cout << "a3 = " << a3 << endl;//11
	cout << "b3 = " << b3 << endl;//100
	system("pause");
	return 0;
}