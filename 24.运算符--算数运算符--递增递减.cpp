//����
#include<iostream>
using namespace std;

int main14()
{
	// ���õ���
	int a = 10;
	a++;   //�ȼ��� a = a +1
	cout << "a = " << a << endl;  //11
	// ǰ�õ���
	int b = 10;
	++b;
	cout << "b = " << b << endl; //11
	//������ǰ�õ�����
	//ǰ���ȶԱ�������++�������ټ�����ʽ������a��
	int a2 = 10;
	int b2 = ++a2 * 10;
	cout << "a2 = " << a2 << endl;//11
	cout << "b2 = " << b2 << endl;//110
	//�����ȼ�����ʽ������a������Ա�������++����
	int a3 = 10;
	int b3 = a3++ * 10;
	cout << "a3 = " << a3 << endl;//11
	cout << "b3 = " << b3 << endl;//100
	system("pause");
	return 0;
}