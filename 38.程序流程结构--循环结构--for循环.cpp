//  For满足循环条件，执行循环语句
// for ( 起始表达式；条件表达式；末尾循环体 ) { 循环语句； }
#include<iostream>
using namespace std;

int main28()
{
	for (int i = 0; i < 10; i++)
	{
		cout << i << endl;
	}
	/*int i = 0;
	for (; ; )       // for里的三个语句全都都可以不写，如果不写条件表达式，需要在循环语句中添加跳出循环的语句
	{
		if (i >= 10)
		{
			break;
		}
		cout << i << endl;
		i++;
	}*/
	system("pause");
	return 0;
}