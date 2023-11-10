// 指针也是数据类型，也要占用内存空间
// 32位操作系统下是4字节，64位操作系统下是8字节, 不管是什么数据类型
//  86表示32位  x64表示64位
#include<iostream>
using namespace std;

int main50()
{
	int a = 10;
	int * p = &a;
	cout << "sizeof(int *) = " << sizeof(int *) << endl;
	cout << "sizeof(int *) = " << sizeof(float *) << endl;
	cout << "sizeof(int *) = " << sizeof(double *) << endl;
	cout << "sizeof(int *) = " << sizeof(char *) << endl;
	cout << "sizeof(int *) = " << sizeof(p) << endl;
	system("pause");
	return 0;
}