//�����������ִ�д��������
//�����������������������

//    "+"	"-" ����������
//    ��+��	��-��	��*��	��/��  �Ӽ��˳�
//    ��%��	ȡ�������
//  todo  "++"ǰ�õ���		"++"���õ���
// todo    "--" ǰ�õݼ�		��--��  ���õݼ�

#include<iostream>
using namespace std;

//�Ӽ��˳�
int main12()
{
	int a1 = 10;
	int b1 = 3;
	cout << a1 + b1 << endl;
	cout << a1 - b1 << endl;
	cout << a1 * b1 << endl;
	cout << a1 / b1 << endl;   //����������������Ҳ��������Ĩ��С������

	int a2 = 10;
	int b2 = 10;
	cout << a2 / b2 << endl;

	int a3 = 10;
	int b3 = 0;
	// !cout << a3 / b3 << endl;   ��������������Ϊ0

	//����С���������
	double d1 = 0.5;
	double d2 = 0.22;
	cout << d1 / d2 << endl;  // ����ҲΪС��


	system("pause");
	return 0;
}