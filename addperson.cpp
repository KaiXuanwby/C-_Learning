#include"addperson.h"

void addperson(Adressbooks* abs)
{
	// �ж�ͨѶ¼�Ƿ�������������˾Ͳ������
	if (abs->m_size == MAX)
	{
		cout << "ͨѶ¼�������޷���ӣ�" << endl;
		return;
	}
	else
	{
		// ��Ӿ�����ϵ��
		//����
		string name;
		cout << "������������" << endl;
		cin >> name;
		abs->personArray[abs->m_size].m_name = name;
		// �Ա�
		int sex = 0;
		cout << "�������Ա�1->��  2->Ů��" << endl;
		abs->personArray[abs->m_size].m_gender = sex;
		while (true)
		{
			cin >> sex;
			if (sex == 1)
			{
				cout << "��" << endl;
				break;
			}
			else if (sex == 2)
			{
				cout << "Ů" << endl;
				break;
			}
			else
			{
				cout << "�������벻�Ϸ���������" << endl;

			}
		}

		// ����
		int age = 0;
		cout << "���������䣺" << endl;
		cin >> age;
		abs->personArray[abs->m_size].m_age = age;
		// �绰
		string phone;
		cout << "������绰���룺" << endl;
		cin >> phone;
		abs->personArray[abs->m_size].m_number = phone;
		//סַ
		string location;
		cout << "�������ͥסַ��" << endl;
		cin >> location;
		abs->personArray[abs->m_size].m_addr = location;
		// ����ͨѶ¼����
		abs->m_size++;
		cout << "��ӳɹ�" << endl;

		system("pause");//�밴���������
		system("cls");//����
	}
}