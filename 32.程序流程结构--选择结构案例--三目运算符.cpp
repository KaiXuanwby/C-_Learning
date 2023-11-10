// 通过三目运算符实现简单的判断
//语法：  表达式1 ? 表达式2 : 表达式3
//解释：如果表达式1的值为真，执行表达式2，并返回表达式2的结果
//如果表达式1的值为假，行表达式3，并返回表达式3的结果
//三目运算符需要表达式2和表达式3它们的类型一样或者可以转换
#include<iostream>
using namespace std;

int main22()
{
	int a = 10;
	int b = 20;
	int c = 0;
	c = (a > b ? a : b);
	cout << "c = " << c << endl;
	(a < b ? a : b) = 100;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	system("pause");
	return 0;
}