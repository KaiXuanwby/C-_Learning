//���������ã���һ��ָ�����ڴ�ռ������������������ڴ�
//�﷨���������� ������ = �����ĳ�ʼֵ
#include<iostream>
#define weekday 7       //�궨�����Ҫ�ӷֺ�
using namespace std;

int main02()
{
	//weekday = 10;    �������ʽ�����ǿ��޸ĵ�����
	int a = 10;
	cout << "a = " << a << endl;
	cout << "һ���ܹ���" << weekday << "��" << endl;
	const int yearmonth = 12;
	cout << "һ���ܹ���" << yearmonth << "����" << endl;
	//yearmonth = 100;    �������ʽ�����ǿ��޸ĵ�����
	system("pause");
	return 0;
}

//������6���ڼ�¼�����в��ɸı����
//C++���峣�������ַ�ʽ��#define�궨�峣���� #define ������ ����
//                       ͨ�����ļ��Ϸ����壬��ʾһ������
//                       const ���εı�����  const �������� ������ = ����ֵ
//                       ͨ���ڱ�������ǰ�ӹؼ���const�����θñ���Ϊ�����������޸�