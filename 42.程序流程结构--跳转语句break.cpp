// ��������ѡ��ṹ����ѭ���ṹ
// breakʹ�õ�ʱ����
//������ switch��������У���������ֹcase������switch
//������ѭ������У�������������ǰ��ѭ�����
//������Ƕ��ѭ���У�����������ڲ�ѭ�����

#include<iostream>
using namespace std;

int main32()
{
	
	// switch�����
	cout << "��ѡ�񸱱����Ѷ�" << endl;
	cout << "1.��ͨ" << endl;
	cout << "2.�е�" << endl;
	cout << "3.����" << endl;
	int select = 0;
	cin >> select;
	switch (select) 
	{
	case 1:
		cout << "��ѡ�������ͨ�Ѷ� " << endl;  break;
	case 2:
		cout << "��ѡ������е��Ѷ� " << endl;  break;
	case 3:
		cout << "��ѡ����������Ѷ� " << endl;  break;
	default:
		break;
	}

	//ѭ�������
	for (int i = 0; i < 10; i++)
	{
		cout << i << endl;
		if (i == 5)
		{
			break;
		}
	}
	
	//Ƕ��
	for (int k = 0; k < 10; k++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (j == 5) 
			{
				break;
			}
				
			cout << "*";
		}
		cout << endl;
	}
	system("pause");
	return 0;
}