//�����ĳ�����ʽ
// �޲��޷�    �в��޷�    �޲��з�    �в��з�
#include<iostream>
using namespace std;

// �޲��޷�
void test01()
{
	cout << "this is test01" << endl;
}

//  �в��޷�
void test02(int a)
{
	cout << "this is test02, a = " << a << endl;
}

//  �޲��з�
int test03()
{
	cout << "this is test03" << endl;
	return 1000;
}

//  �в��з�
int test04(int a)
{
	cout << "this is test04, a = " << a << endl;
	return a;
}

int main46()
{
	int num1 = 10;
	test01();
	
	test02(num1);

	int num2 = test03();
	cout << "num2 = " << num2 << endl;
	
	int num3 = test04(999);
	cout << "num3 = " << num3 << endl;

	system("pause");
	return 0;
}