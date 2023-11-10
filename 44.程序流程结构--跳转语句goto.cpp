// todo 可以无条件跳转语句
// 语法：goto 标记
//            标记：
//如果标记的名称存在，执行到goto语句时，会跳转到标记的位置
#include<iostream>
using namespace std;

int main34()
{
	cout << "1、xxxxxxx" << endl;
	cout << "2、xxxxxxx" << endl;
	goto FLAG;
	cout << "3、xxxxxxx" << endl;
	cout << "4、xxxxxxx" << endl;
	FLAG:
	cout << "5、xxxxxxx" << endl;
	system("pause");
	return 0;
}