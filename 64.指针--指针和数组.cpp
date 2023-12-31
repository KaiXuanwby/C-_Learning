// 利用指针访问数组中元素
#include<iostream>
using namespace std;

int main54()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	cout << "第一个元素为：" << arr[0] << endl;
	int* p = arr;  // arr就是数组的首地址
	// 利用指针访问第一个元素
	cout << "利用指针访问第一个元素: " << *p << endl;
	p++;   // 让指针向后偏移四个字节
	cout << "利用指针访问第二个元素：" << *p << endl;
	int* p2 = arr;

	for (int i = 0; i < 10; i++)
	{
		cout << "利用指针访问第" << i << "个元素: " << *p2 << endl;
		p2++;
	}

	system("pause");
	return 0;
}