//�������ʹ�������߼ٵ�ֵ
//bool����ֻ������ֵtrue���棩,false���٣�����������ռһ���ֽڴ�С
#include<iostream>
using namespace std;

int main10()
{
	bool flag = true;
	cout << flag << endl; //1

	flag = false;
	cout << flag << endl; //0
	//������1�����棬0�����
	cout << "bool����ռ���ֽڵĴ�СΪ��" << sizeof(bool) << "�ֽ�" << endl; //1

	system("pause");
	return 0;
}