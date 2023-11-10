//利用sizeof关键字统计数据类型所占的内存大小
//语法：  sizeof( 数据类型/变量 )
#include<iostream>
using namespace std;

int main05()
{
	cout << "short类型所占的内存空间为：" << sizeof(short) << endl;
	cout << "int类型所占的内存空间为：" << sizeof(int) << endl;
	cout << "long类型所占的内存空间为：" << sizeof(long) << endl;
	cout << "long long类型所占的内存空间为：" << sizeof(long long) << endl;
	system("pause");
	return 0;
}
//整型结论：short < int <= long <= long long 