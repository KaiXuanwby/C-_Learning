//作用：用于表示小数
//分为：float 单精度浮点型     double双精度浮点型
//float  占用4字节内存空间     7位有效数字
//double 占用8字节内存空间    15-16位有效数字
#include<iostream>
using namespace std;

int main06()
{
	//默认情况下，输出一个小数，会显示出6位有效数字
	float f1 = 3.1415926f;     //如果不写f，小数会默认为双精度浮点型，前面的float需要进一步转换，加上f则省去了转换过程，直接单精度
	cout << "f1 = " << f1 << endl;
	double d1 = 3.1415926;
	cout << "d1 = " << d1 << endl;

	//统计内存空间
	cout << "float占据的内存空间为：" << sizeof(float) << endl;  //4
	cout << "double占据的内存空间为：" << sizeof(double) << endl; //8

	//科学计数法
	float f2 = 3e2;    //如果e后为正数，代表的是3*10^2
	cout << "f2 = " << f2 << endl;
	float f3 = 3e-2;     //如果e后为负数（不需要加括号），代表的是：3*0.1^2
	cout << "f3 = " << f3 << endl;
	system("pause");
	return 0;

}