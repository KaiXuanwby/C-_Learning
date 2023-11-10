//C++ 规定在创建一个变量或者常量时，必须要指出相应的数据类型，否则无法给变量分配内存
// 数据类型存在的意义：给变量分配合适的内存空间
//整形：表示整型类型的数据。C++可以用以下几种方式表示整型，区别在于所占空间内存不同
//short：占用2字节            取值范围：(-2^15 ----- 2^15-1) = -327668   ~  32767
//int：占用4字节                   取值范围：  (-2^31 ----- 2^31-1)
//long：windows 为4字节，linux为4字节（32位），8字节（64位）              取值范围： (-2^31 ----- 2^31-1)
//long long：8字节                  取值范围： (-2^63 ----- 2^63-1)

#include<iostream>
using namespace std;

int main04()
{
	short num1 = 10;  //超过取值范围会显示错误
	int num2 = 10;
	long num3 = 10;
	long long num4 = 10;
	cout << "num1 = " << num1 << endl;
	cout << "num2 = " << num2 << endl;
	cout << "num3 = " << num3 << endl;
	cout << "num4 = " << num4 << endl;
	system("pause");
	return 0;
}
