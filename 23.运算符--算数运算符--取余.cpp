//取模（取余）
#include<iostream>
using namespace std;

int main13()
{
	int a1 = 10;
	int b1 = 3;
	cout << 10 % 3 << endl;
	
	int a2 = 10;
	int b2 = 20;
	cout << a2 % b2 << endl;

	int a3 = 10;
	int b3 = 0;
	//cout << a3 % b3 << endl;    //取模时，除数也不i能为0

	double d1 = 3.14;
	double d2 = 1.1;
	//cout << d1 % d2 << endl;  //两个小数不可以取模

	int a5 = 10;
	int b5 = -3;
	cout << a5 % b5 << endl;  // 1
	int a6 = -10;
	int b6 = 3;
	cout << a6 % b6 << endl;  // -1
	int a7 = -10;
	int b7 = -3;
	cout << a7 % b7 << endl;  // -1
	// 取余正负与否，是看被除数的正负，被除数为正，结果为正，反之，结果为负

	system("pause");
	return 0;
}