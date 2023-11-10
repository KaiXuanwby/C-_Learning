//有三只小猪ABC，请分别输入三只小猪的体重，并且判断哪只小猪最重

#include<iostream>
using namespace std;

int main21()
{
	int A, B, C;
	cout << "请输入三只小猪的体重：" << endl;
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
			cout << "A的体重最重" << endl;
		}
		else
		{
			cout << "C的体重最重" << endl;
		}
	}
	else
	{
		if (B > C)
		{
			cout << "B的体重最重" << endl;
		}
		else
		{
			cout << "C的体重最重" << endl;
		}
	}*/
	if (A > B && A > C)
	{
		cout << "A的体重最重" << endl;
	}
	else if (B > A && B > C)
	{
		cout << "B的体重最重" << endl;
	}
	else if (C > A && C > B)
	{
		cout << "C的体重最重" << endl;
	}
	system("pause");
	return 0;
}