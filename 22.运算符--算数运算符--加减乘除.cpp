//运算符：用于执行代码的运算
//算数运算符：处理四则运算

//    "+"	"-" 代表正负号
//    “+”	“-”	“*”	“/”  加减乘除
//    “%”	取余运算符
//  todo  "++"前置递增		"++"后置递增
// todo    "--" 前置递减		“--”  后置递减

#include<iostream>
using namespace std;

//加减乘除
int main12()
{
	int a1 = 10;
	int b1 = 3;
	cout << a1 + b1 << endl;
	cout << a1 - b1 << endl;
	cout << a1 * b1 << endl;
	cout << a1 / b1 << endl;   //两个整数相除，结果也是整数，抹除小数部分

	int a2 = 10;
	int b2 = 10;
	cout << a2 / b2 << endl;

	int a3 = 10;
	int b3 = 0;
	// !cout << a3 / b3 << endl;   报错：除数不可以为0

	//两个小数可以相除
	double d1 = 0.5;
	double d2 = 0.22;
	cout << d1 / d2 << endl;  // 除数也为小数


	system("pause");
	return 0;
}