// ����ָ�������������������޸�ʵ�ε�ֵ
#include<iostream>
using namespace std;

// ֵ����
void swap03(int num1, int num2)
{
	cout << "����ǰ��" << endl;
	cout << "num1 = " << num1 << endl;
	cout << "num2 = " << num2 << endl;

	int temp = num1;
	num1 = num2;
	num2 = temp;

	cout << "������" << endl;
	cout << "num1 = " << num1 << endl;
	cout << "num2 = " << num2 << endl;
}

//��ַ����
void swap04(int* p1, int* p2)
{
	int temp = *p1;
	*p1 = *p2;
	*p2 = temp;

}
int main55()
{
	int a = 10;
	int b = 20;
	//swap(a, b);
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	swap04(&a, &b);
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	system("pause");
	return 0;
}
// todo ��������޸�ʵ�Σ�����ֵ���ݣ�������޸�ʵ�Σ����õ�ַ����