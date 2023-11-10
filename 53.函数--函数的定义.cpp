// 将一段经常使用的代码封装起来，减少重复代码
// 一个较大的程序，一般分为若干个程序块，每个模块实现特定的功能

//函数的定义一般主要有5个步骤
//返回值类型 ：在函数定义中，一个函数可以返回一个值
//函数名：给函数起名称
//参数表列：使用该函数时，传入的数据
//函数体语句：花括号内的代码，函数内需要执行的语句
//return表达式：和返回值类型挂钩，函数执行完毕之后，返回相应的数据

//语法：  返回值类型  函数名  ( 参数列表 ）
//{
//	函数体语句；
//	return表达式；
//}

#include<iostream>
using namespace std;

int add01(int num1, int num2)
{
	int sum = num1 + num2;
	return sum;
}

int main43()
{
	int a = 8;
	int b = 9;
	int c = add01(a, b);
	cout << c << endl;
	system("pause");
	return 0;
}