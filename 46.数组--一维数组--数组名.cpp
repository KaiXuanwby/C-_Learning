// 一维数组数组名的用途：
//可以统计整个数组在内存中的长度
//可以获取数组在内存中的首地址
#include<iostream>
using namespace std;

int main36()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9 };
	cout << "整个数组占用的内存空间为：" << sizeof(arr) << endl;
	cout << "每个元素所占用的内存空间：" << sizeof(arr[0]) << endl;

	cout << "数组中元素的个数为：" << sizeof(arr) / sizeof(arr[0]) << endl;
	cout << "数组中元素的个数为：" << _countof(arr) << endl;    // 效果相同

	cout << "数组的首地址为：" << (int)arr << endl;
	cout << "数组的首地址为：" << arr << endl;      // 十六进制
	cout << "数组中第一个元素地址为：" << (int)&arr[0] << endl;
	cout << "数组中第一个元素地址为：" << &arr[0] << endl;
	// 上方四种写法都是同一种结果
	cout << "数组中第二个元素的地址为：" << &arr[1] << endl;
	cout << "数组中第二个元素的地址为：" << (int)&arr[1] << endl;
	//数组名是常量，不可以进行赋值操作
	//arr=100
	
	system("pause");
	return 0;
}