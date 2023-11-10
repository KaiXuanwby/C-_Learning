// 指针的作用，可以通过指针间接访问内存
// 内存编号是从0开始记录的，一般用16进制数字表示
//可以利用指针变量保存地址
// 指针变量定义语法：   数据类型 * 变量名；
#include<iostream>
using namespace std;

int main49()
{
	int a = 10;
	int* p;
	// 让指针记录变量a的地址
	p = &a;
	cout << "a的地址为：" << &a << endl;
	cout << "指针p为：" << p << endl;

	// 可以通过解引用的方式找到指针指向的内存
	//  指针前加 * 代表解引用，找到指针指向的内存中的数据
	*p = 1000;
	cout << "a = " << a << endl;
	cout << "*p = " << *p << endl;
	// 通过指针 *p 间接访问并修改 内存
	system("pause");
	return 0;
}
