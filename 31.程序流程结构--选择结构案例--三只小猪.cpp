//����ֻС��ABC����ֱ�������ֻС������أ������ж���ֻС������

#include<iostream>
using namespace std;

int main21()
{
	int A, B, C;
	cout << "��������ֻС������أ�" << endl;
	cout << "A:";
	cin >> A;
	cout << "B:";
	cin >> B;
	cout << "C:";
	cin >> C;
	/*if (A > B)
	{
		if (A > C)
		{
			cout << "A����������" << endl;
		}
		else
		{
			cout << "C����������" << endl;
		}
	}
	else
	{
		if (B > C)
		{
			cout << "B����������" << endl;
		}
		else
		{
			cout << "C����������" << endl;
		}
	}*/
	if (A > B && A > C)
	{
		cout << "A����������" << endl;
	}
	else if (B > A && B > C)
	{
		cout << "B����������" << endl;
	}
	else if (C > A && C > B)
	{
		cout << "C����������" << endl;
	}
	system("pause");
	return 0;
}