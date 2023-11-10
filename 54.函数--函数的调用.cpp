//使用定义好的函数
//语法：函数名（ 参数 ）

#include<iostream>
using namespace std;

int add02(int num1, int num2)  // 定义中的num1,num2称为形式参数，简称形参
{
	int sum = num1 + num2;
	return sum;
}

int main44()
{
	int a = 10;
	int b = 10;
	int sum = add02(a, b);   //调用时的a,b称为实际参数，简称实参
	cout << sum << endl;

	system("pause");
	return 0;
}