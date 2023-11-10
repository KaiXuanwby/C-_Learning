// 练习案例：敲桌子
//从1开始到数字100，如果数字个位含有7，或者数字十位含有7，或者该数字是7的倍数，打印敲桌子，其他的数直接输出
#include<iostream>
using namespace std;

int main29()
{
	for (int num = 1; num < 101; num++)
	{
		if (num % 10 == 7 || num / 10 % 10 == 7 || num % 7 == 0)
		{
			cout << "敲桌子，砰！" << endl;
		}
		else
		{
			cout << num << endl;
		}
	}
	system("pause");
	return 0;
}