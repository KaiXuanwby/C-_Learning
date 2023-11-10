// 利用指针作函数参数，可以修改实参的值
#include<iostream>
using namespace std;

// 值传递
void swap03(int num1, int num2)
{
	cout << "交换前：" << endl;
	cout << "num1 = " << num1 << endl;
	cout << "num2 = " << num2 << endl;

	int temp = num1;
	num1 = num2;
	num2 = temp;

	cout << "交换后：" << endl;
	cout << "num1 = " << num1 << endl;
	cout << "num2 = " << num2 << endl;
}

//地址传递
void swap04(int* p1, int* p2)
{
	int temp = *p1;
	*p1 = *p2;
	*p2 = temp;

}
int main55()
{
	int a = 10;
	int b = 20;
	//swap(a, b);
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	swap04(&a, &b);
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	system("pause");
	return 0;
}
// todo 如果不想修改实参，就用值传递，如果想修改实参，就用地址传递