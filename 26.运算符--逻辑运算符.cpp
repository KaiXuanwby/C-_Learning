//���ڸ��ݱ��ʽ��ֵ������ֵ���ֵ
//    �� �����ǣ����aΪ�棬��aΪ�٣���֮��!aΪ��
//   �� && ���룬һ�پͼ٣�ȫ�����
//   �� || ����һ����棬ȫ�ٲż�
#include<iostream>
using namespace std;

int main16()
{
	// ��
	int a = 10;
	cout << !a << endl;  // 0
	cout << !!a << endl; // 1
	
	//��
	a = 10;
	int b = 10;
	cout << (a && b) << endl;// 1
	a = 10;
	b = 0;
	cout << (a && b) << endl;// 0
	a = 0;
	b = 0;
	cout << (a && b) << endl;// 0

	//��
	a = 10;
	b = 10;
	cout << (a || b) << endl;// 1
	a = 10;
	b = 0;
	cout << (a || b) << endl;// 1
	a = 0;
	b = 0;
	cout << (a || b) << endl;// 0
	system("pause");
	return 0;
}