// 作用：告诉编译器函数的名称以及如何调用函数。函数的实际主体可以单独定义
//   函数的声明可以多次，但是函数的定义只能有一次
#include<iostream>
using namespace std;

//提前告诉编译器函数的存在，可以利用函数的声明
int max(int a, int b);


int main47()
{
	int a = 10;
	int b = 5;
	int c = max(a, b);
	cout << "c = " << c << endl;
	system("pause");
	return 0;
}

int max(int a, int b)
{
	return a > b ? a : b;
}