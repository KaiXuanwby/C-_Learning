// while满足循环条件，执行循环语句
// while( 循环条件 ){ 循环语句 }
// todo 只要循环条件的结果为真，就执行循环语句
#include<iostream>
using namespace std;

int main24()
{
	int num = 0;
	// num++
	// cout << num << endl;
	while (num < 10)    //  在写循环的过程中，一定要避免死循环的出现
	{
		cout << "num = " << num << endl;
		num++;
	}
	system("pause");
	return 0;
}
