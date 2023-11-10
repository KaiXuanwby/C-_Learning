// 在循环体中套一层循环，解决实际问题

#include<iostream>
using namespace std;

int main30()
{
	for (int i = 0; i < 10; i++)       // 外层执行一次，内层执行一周
	{
		for (int j = 0; j < 10; j++)
		{
			cout << "* ";
		}
		cout << "\n";
	}
	system("pause");
	return 0;
}