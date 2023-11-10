// 二维数组数组名
//查看二维数组所占用的内存空间
//获取二维数组首地址
#include<iostream>
using namespace std;

int main41()
{
	int arr[2][3] =
	{
		{1,2,3},
		{4,5,6}
	};
	cout << "二维数组占用的内存空间为：" << sizeof(arr) << endl;
	cout << "二维数组第一行占用的内存空间为：" << sizeof(arr[0]) << endl;
	cout << "二维数组第一个元素占用的内存空间为：" << sizeof(arr[0][0]) << endl;

	cout << "二维数组行数为：" << sizeof(arr)/sizeof(arr[0]) << endl;
	cout << "二维数组列数为：" << sizeof(arr[0])/sizeof(arr[0][0]) << endl;

	//查看二维数组所占用的内存空间
	cout << "二维数组的首地址：" << arr << endl;
	cout << "二维数组的首地址：" << (long long)arr << endl;
	cout << "二维数组第一行首地址：" << arr[0] << endl;
	cout << "二维数组第一行首地址：" << (long long)arr[0] << endl;
	cout << "二维数组第二行首地址：" << arr[1] << endl;
	cout << "二维数组第二行首地址：" << (long long)arr[1] << endl;
	// todo 对单个元素取址的时候，要加&符
	cout << "二维数组第一个元素首地址：" << &arr[0][0] << endl;
	cout << "二维数组第一个元素首地址：" << (long long)&arr[0][0] << endl;
	cout << "二维数组第二个元素首地址：" << &arr[0][1] << endl;
	cout << "二维数组第二个元素首地址：" << (long long)&arr[0][1] << endl;
	//获取二维数组首地址
	
	system("pause");
	return 0;
}