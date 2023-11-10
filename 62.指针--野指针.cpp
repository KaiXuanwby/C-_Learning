// 指针变量指向非法的内存空间
#include<iostream>
using namespace std;

int main52()
{
	// 在程序中，避免出现野指针
	int* p = (int* )0x1100;
	// 访问野指针会报错
	//cout << *p << endl;


	system("pause");
	return 0;

}