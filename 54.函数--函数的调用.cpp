//ʹ�ö���õĺ���
//�﷨���������� ���� ��

#include<iostream>
using namespace std;

int add02(int num1, int num2)  // �����е�num1,num2��Ϊ��ʽ����������β�
{
	int sum = num1 + num2;
	return sum;
}

int main44()
{
	int a = 10;
	int b = 10;
	int sum = add02(a, b);   //����ʱ��a,b��Ϊʵ�ʲ��������ʵ��
	cout << sum << endl;

	system("pause");
	return 0;
}