// 声明一个5元素的数组，并且将元素逆置；
// 如原数组元素为：1，3，2，5，4；逆置后输出结果为4，5，2，3，1
#include<iostream>
using namespace std;

int main38()
{
	int t;
	int arr[8] = { 1,3,2,5,4,9,4,8 };
	cout << _countof(arr) << endl;
	cout << "逆序之前：";
	for (int j = 0; j < _countof(arr); j++)
	{
		cout << arr[j] << "  ";
	}
	cout << endl;
	for (int i = 0; i < _countof(arr); i++)    //此处也可以使用while ，whike更适于不知道循环多少次的情况
	{
		if (i >= _countof(arr) - 1 - i)
		{
			break;
		}
		t = arr[i];
		arr[i] = arr[_countof(arr) - 1 - i];   //也可定义start ,end,执行++和--命令
		arr[_countof(arr) - 1 - i] = t;
		
	}
	cout << "逆序之后：";
	for (int j = 0; j < _countof(arr); j++)
	{
		cout << arr[j] << "  ";
	}
	cout << endl;
	system("pause");
	return 0;
}