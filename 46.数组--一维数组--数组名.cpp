// һά��������������;��
//����ͳ�������������ڴ��еĳ���
//���Ի�ȡ�������ڴ��е��׵�ַ
#include<iostream>
using namespace std;

int main36()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9 };
	cout << "��������ռ�õ��ڴ�ռ�Ϊ��" << sizeof(arr) << endl;
	cout << "ÿ��Ԫ����ռ�õ��ڴ�ռ䣺" << sizeof(arr[0]) << endl;

	cout << "������Ԫ�صĸ���Ϊ��" << sizeof(arr) / sizeof(arr[0]) << endl;
	cout << "������Ԫ�صĸ���Ϊ��" << _countof(arr) << endl;    // Ч����ͬ

	cout << "������׵�ַΪ��" << (int)arr << endl;
	cout << "������׵�ַΪ��" << arr << endl;      // ʮ������
	cout << "�����е�һ��Ԫ�ص�ַΪ��" << (int)&arr[0] << endl;
	cout << "�����е�һ��Ԫ�ص�ַΪ��" << &arr[0] << endl;
	// �Ϸ�����д������ͬһ�ֽ��
	cout << "�����еڶ���Ԫ�صĵ�ַΪ��" << &arr[1] << endl;
	cout << "�����еڶ���Ԫ�صĵ�ַΪ��" << (int)&arr[1] << endl;
	//�������ǳ����������Խ��и�ֵ����
	//arr=100
	
	system("pause");
	return 0;
}