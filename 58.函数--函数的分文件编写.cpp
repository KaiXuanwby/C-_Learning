// 让代码结构更加清晰，函数分文件编写一般有四个步骤
// 创建后缀名为.h的头文件
//创建后缀名为.cpp的源文件
//在头文件中写函数的声明  :  也需要把框架写入
//在源文件中写函数的定义

#include<iostream>
#include"swap01.h"
using namespace std;
////函数的声明
//void swap01(int a, int b);
////函数的定义
//void swap01(int a, int b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//}
int main48()
{
	int num1 = 10;
	int num2 = 20;
	swap01(num1, num2);
	system("pause");
	return 0;
}