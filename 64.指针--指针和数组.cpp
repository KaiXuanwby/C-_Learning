// ����ָ�����������Ԫ��
#include<iostream>
using namespace std;

int main54()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	cout << "��һ��Ԫ��Ϊ��" << arr[0] << endl;
	int* p = arr;  // arr����������׵�ַ
	// ����ָ����ʵ�һ��Ԫ��
	cout << "����ָ����ʵ�һ��Ԫ��: " << *p << endl;
	p++;   // ��ָ�����ƫ���ĸ��ֽ�
	cout << "����ָ����ʵڶ���Ԫ�أ�" << *p << endl;
	int* p2 = arr;

	for (int i = 0; i < 10; i++)
	{
		cout << "����ָ����ʵ�" << i << "��Ԫ��: " << *p2 << endl;
		p2++;
	}

	system("pause");
	return 0;
}