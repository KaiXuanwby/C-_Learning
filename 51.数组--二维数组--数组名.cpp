// ��ά����������
//�鿴��ά������ռ�õ��ڴ�ռ�
//��ȡ��ά�����׵�ַ
#include<iostream>
using namespace std;

int main41()
{
	int arr[2][3] =
	{
		{1,2,3},
		{4,5,6}
	};
	cout << "��ά����ռ�õ��ڴ�ռ�Ϊ��" << sizeof(arr) << endl;
	cout << "��ά�����һ��ռ�õ��ڴ�ռ�Ϊ��" << sizeof(arr[0]) << endl;
	cout << "��ά�����һ��Ԫ��ռ�õ��ڴ�ռ�Ϊ��" << sizeof(arr[0][0]) << endl;

	cout << "��ά��������Ϊ��" << sizeof(arr)/sizeof(arr[0]) << endl;
	cout << "��ά��������Ϊ��" << sizeof(arr[0])/sizeof(arr[0][0]) << endl;

	//�鿴��ά������ռ�õ��ڴ�ռ�
	cout << "��ά������׵�ַ��" << arr << endl;
	cout << "��ά������׵�ַ��" << (long long)arr << endl;
	cout << "��ά�����һ���׵�ַ��" << arr[0] << endl;
	cout << "��ά�����һ���׵�ַ��" << (long long)arr[0] << endl;
	cout << "��ά����ڶ����׵�ַ��" << arr[1] << endl;
	cout << "��ά����ڶ����׵�ַ��" << (long long)arr[1] << endl;
	// todo �Ե���Ԫ��ȡַ��ʱ��Ҫ��&��
	cout << "��ά�����һ��Ԫ���׵�ַ��" << &arr[0][0] << endl;
	cout << "��ά�����һ��Ԫ���׵�ַ��" << (long long)&arr[0][0] << endl;
	cout << "��ά����ڶ���Ԫ���׵�ַ��" << &arr[0][1] << endl;
	cout << "��ά����ڶ���Ԫ���׵�ַ��" << (long long)&arr[0][1] << endl;
	//��ȡ��ά�����׵�ַ
	
	system("pause");
	return 0;
}