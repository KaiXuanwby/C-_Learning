// whileѭ������
// ϵͳ�������һ��1�� 100֮������֣���ҽ��в²⣬����´���ʾ������ֹ�����С���¶Թ�ϲʤ���������˳���Ϸ
#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main25()
{
	// ϵͳ���������
	srand((int)time(0));         // ����������д��룬���ɵ������ÿ�ζ���һ����
	//srand((unsigned int)time(NULL));   //  ���Ҳ����
	int num = rand() % 100 + 1;
	//   �����������������0-99  ��+1����0+1~~99+1 �����
	int guess = 0;
	int time = 1;
	cout << "������һ��1-100֮�������";
	cin >> guess;
	while (guess != num)
	{
		if (guess > num)
		{
			cout << "���µ���̫���ˣ����ٲ�һ��" << endl;;
			cout << "������һ��1-100֮�������";
			cin >> guess;
		}
		else
		{
			cout << "���µ���̫С�ˣ����ٲ�һ��" << endl;;
			cout << "������һ��1-100֮�������";
			cin >> guess;
		}
		time++;
		cout << "���Ѿ�����" << time << "�Σ�����" << endl;
	}
	cout << "��ϲ�����¶���" << endl;
	system("pause");
	return 0;
}