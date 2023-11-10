//变量的作用：给一段指定的内存空间起名，方便操作这段内存
//语法：数据类型 变量名 = 变量的初始值
#include<iostream>
#define weekday 7       //宏定义后不需要加分号
using namespace std;

int main02()
{
	//weekday = 10;    报错，表达式必须是可修改的佐治
	int a = 10;
	cout << "a = " << a << endl;
	cout << "一周总共有" << weekday << "天" << endl;
	const int yearmonth = 12;
	cout << "一年总共有" << yearmonth << "个月" << endl;
	//yearmonth = 100;    报错，表达式必须是可修改的佐治
	system("pause");
	return 0;
}

//常量：6用于记录程序中不可改变的量
//C++定义常量的两种方式：#define宏定义常量： #define 常量名 常量
//                       通常在文件上方定义，表示一个常量
//                       const 修饰的变量：  const 数据类型 常量名 = 常量值
//                       通常在变量定义前加关键字const，修饰该变量为常量，不可修改