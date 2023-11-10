// 空指针：指针变量指向内存中编号为0的空间
// 用途：初始化指针变量
// 注意：空指针指向的内存是不可以访问的
#include<iostream>
using namespace std;

int main51()
{
	int* p = NULL;
	// 0~255位系统占用内存，不允许用户访问
	//cout << *p << endl;     访问权限冲突
	system("pause");
	return 0;
}