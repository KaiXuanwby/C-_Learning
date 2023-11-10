//字符型变量用于显示单个字符
//语法： char ch = 'a';
//注意：在显示字符型变量时，用单引号将字符括起来，不要用双引号
//注意：单引号内只能有一个字符，不可以是字符串
//C和C++中字符型变量只占用1个字节
//字符型变量并不是把字符本身放到内存中存储，而是将对应的ASCII编码放入到存储单元
#include<iostream>
using namespace std;

int main07()
{
	char ch1 = 'a';
	cout << ch1 << endl;
	//统计占用内存大小
	cout << "char字符型变量占用的内存空间：" << sizeof(char) << endl; // 1
	//常见错误
	char ch2 = 'b';      // 不能用双引号引用字符类型变量的值
	// char ch3 = 'abdbcba'   // 创建字符型变量时，单引号内只能有一个字符
	//字符型变量对应ASCII码
	cout << (int)ch1 << endl;     // (int)将字符型强制转换成一个十进制的整型
	// a---97
	// A---65
	system("pause");
	return 0;
}