//用于根据表达式的值返回真值或假值
//    “ ！”非，如果a为真，则！a为假，反之，!a为真
//   ” && “与，一假就假，全真才真
//   “ || ”或，一真就真，全假才假
#include<iostream>
using namespace std;

int main16()
{
	// 非
	int a = 10;
	cout << !a << endl;  // 0
	cout << !!a << endl; // 1
	
	//与
	a = 10;
	int b = 10;
	cout << (a && b) << endl;// 1
	a = 10;
	b = 0;
	cout << (a && b) << endl;// 0
	a = 0;
	b = 0;
	cout << (a && b) << endl;// 0

	//或
	a = 10;
	b = 10;
	cout << (a || b) << endl;// 1
	a = 10;
	b = 0;
	cout << (a || b) << endl;// 1
	a = 0;
	b = 0;
	cout << (a || b) << endl;// 0
	system("pause");
	return 0;
}