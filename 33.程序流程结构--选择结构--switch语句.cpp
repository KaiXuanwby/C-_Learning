// ִ�ж������ķ�֧���
// �﷨��

/*switch (���ʽ)
{
	case ���1:    ִ�����;  break;
	case ���2:    ִ�����;  break;
	.......
	default :    ִ�����;  break;
}
*/
#include<iostream>
using namespace std;

int main23()
{
	int score = 0;
	// ����Ӱ���
	cout << "�����Ӱ���д�֣�" << endl;
	cin >> score;
	cout << "����ķ���Ϊ��" << score << endl;
	switch (score)      // switch���������д������ʲô�������в�ͬ�ķ�֧
	{
	case 10:
		cout << "����Ϊ�Ǿ����Ӱ" << endl;
		break;    // �˳���ǰ�ķ�֧
	case 9:
		cout << "����Ϊ�Ǿ����Ӱ" << endl;
		break;
	case 8:
		cout << "����Ϊ��Ӱ������" << endl;
		break;
	case 7:
		cout << "����Ϊ��Ӱ������" << endl;
		break;
	case 6:
		cout << "����Ϊ��Ӱһ��" << endl;
		break;
	case 5:
		cout << "����Ϊ��Ӱһ��" << endl;
		break;
	default :
		cout << "����Ϊ�õ�Ӱ��Ӧ����ӳ" << endl;
		break;
	}
	
	system("pause");
	return 0;
}
//if �� switch������
/*
switchȱ�㣺�жϵ�ʱ��ֻ�������ͻ����ַ��ͣ���������һ������
switch�ŵ㣺�ṹ������ִ��Ч�ʸ�
*/