//ȡģ��ȡ�ࣩ
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
	//cout << a3 % b3 << endl;    //ȡģʱ������Ҳ��i��Ϊ0

	double d1 = 3.14;
	double d2 = 1.1;
	//cout << d1 % d2 << endl;  //����С��������ȡģ

	int a5 = 10;
	int b5 = -3;
	cout << a5 % b5 << endl;  // 1
	int a6 = -10;
	int b6 = 3;
	cout << a6 % b6 << endl;  // -1
	int a7 = -10;
	int b7 = -3;
	cout << a7 % b7 << endl;  // -1
	// ȡ����������ǿ���������������������Ϊ�������Ϊ������֮�����Ϊ��

	system("pause");
	return 0;
}