// ͨ����Ŀ�����ʵ�ּ򵥵��ж�
//�﷨��  ���ʽ1 ? ���ʽ2 : ���ʽ3
//���ͣ�������ʽ1��ֵΪ�棬ִ�б��ʽ2�������ر��ʽ2�Ľ��
//������ʽ1��ֵΪ�٣��б��ʽ3�������ر��ʽ3�Ľ��
//��Ŀ�������Ҫ���ʽ2�ͱ��ʽ3���ǵ�����һ�����߿���ת��
#include<iostream>
using namespace std;

int main22()
{
	int a = 10;
	int b = 20;
	int c = 0;
	c = (a > b ? a : b);
	cout << "c = " << c << endl;
	(a < b ? a : b) = 100;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	system("pause");
	return 0;
}