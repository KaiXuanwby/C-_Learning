// ��ϰ������������
//��1��ʼ������100��������ָ�λ����7����������ʮλ����7�����߸�������7�ı�������ӡ�����ӣ���������ֱ�����
#include<iostream>
using namespace std;

int main29()
{
	for (int num = 1; num < 101; num++)
	{
		if (num % 10 == 7 || num / 10 % 10 == 7 || num % 7 == 0)
		{
			cout << "�����ӣ��飡" << endl;
		}
		else
		{
			cout << num << endl;
		}
	}
	system("pause");
	return 0;
}