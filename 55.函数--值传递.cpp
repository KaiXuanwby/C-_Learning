// ��νֵ���ݣ����Ǻ�������ʱʵ�ν���ֵ������β�
// ֵ����ʱ������βη����ı䣬������Ӱ��ʵ��

#include<iostream>
using namespace std;

// �����������Ҫ����ֵ������ʱ����дvoid
void swap(int num1, int num2)
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
	//return;    ����������ʱ������Ҫ����ֵ�����Բ�дreturn
}

int main45()
{
	int a = 10;
	int b = 20;
	swap(a, b);
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	
	system("pause");
	return 0;
}