//���и�ʽif��䣺if(����)  {��������ִ�е����}  else  {��������ִ�е����}
#include<iostream>
using namespace std;

int main18()
{
	// ����һ�������������������600�֣���Ϊ����һ����ѧ��������Ļ�ϴ�ӡ����֮����ӡû��
	int score = 0;
	cout << "���������ķ���" << endl;
	cin >> score;
	cout << "������ķ���Ϊ��" << score << endl;
	if (score > 600)
	{
		cout << "��ϲ����һ����ѧ���ڵ��㣡" << endl;
	}
	else
	{
		cout << "��Ǹ�����ķ�������һ�����в��" << endl;
	}
	system("pause");
	return 0;
}