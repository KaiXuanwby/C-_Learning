// 语法： do { 循环语句 }  while ( 循环条件 );
// todo  注意：与while循环的区别在于do...while会先执行一次循环语句，再判断循环条件
#include<iostream>
using namespace std;

int main26()
{
	int num = 0;
	do
	{
		cout << num << endl;
		num++;
	} while (num < 10);    //  todo 不要忘了加分号
	system("pause");
	return 0;
}