//���ڴӼ��̻�ȡ����
//�ؼ��֣�cin
//�﷨��cin >> ����
#include<iostream>
using namespace std;

int main11()
{
	//��������
	int a = 0;
	cout << "���������ͱ�����" << endl;
	cin >> a;
	cout << a << endl;

	//����������
	double b = 0;
	cout << "�����븡���ͱ�����" << endl;
	cin >> b;
	cout << b << endl;

	//�ַ�������
	char c = 'a';
	cout << "�������ַ��ͱ�����" << endl;
	cin >> c;
	cout << c << endl;

	//�ַ���������
	string d = "hello";
	cout << "�������ַ����ͱ�����" << endl;
	cin >> d;
	cout << d << endl;

	//������������
	bool e = true;
	cout << "�����벼�����ͱ�����" << endl;
	cin >> e;  //bool���ͣ�ֻҪ�Ƿ�0��ֵ��������
	cout << e << endl;

	
	system("pause");
	return 0;
}