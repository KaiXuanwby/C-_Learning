// 所谓值传递，就是函数调用时实参将数值传入给形参
// 值传递时，如果形参发生改变，并不会影响实参

#include<iostream>
using namespace std;

// 如果函数不需要返回值，声明时可以写void
void swap(int num1, int num2)
{
	cout << "交换前：" << endl;
	cout << "num1 = " << num1 << endl;
	cout << "num2 = " << num2 << endl;

	int temp = num1;
	num1 = num2;
	num2 = temp;

	cout << "交换后：" << endl;
	cout << "num1 = " << num1 << endl;
	cout << "num2 = " << num2 << endl;
	//return;    当函数声明时，不需要返回值，可以不写return
}

int main45()
{
	int a = 10;
	int b = 20;
	swap(a, b);
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	
	system("pause");
	return 0;
}