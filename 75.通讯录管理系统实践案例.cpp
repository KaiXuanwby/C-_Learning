// ϵͳ����Ҫʵ�ֵĹ�������
/*
�����ϵ�ˣ���ͨѶ¼��������ˣ���Ϣ�������������Ա����䣬��ϵ�绰����ͥסַ������¼1000��
		�����ϵ�˽ṹ�壻���ͨѶ¼�ṹ�壻main�����д���ͨѶ¼����װ�����ϵ�˺��������������ϵ�˹���
		��ϵ����Ϣ�������������Ա����䣬��ϵ�绰����ͥסַ
��ʾ��ϵ�ˣ���ʾͨѶ¼��������ϵ�˵���Ϣ
ɾ����ϵ�ˣ�������������ɾ��ָ����ϵ��
������ϵ�ˣ����������鿴ָ����ϵ����Ϣ
�޸���ϵ�ˣ��������������޸�ָ����ϵ��
�����ϵ�ˣ����ͨѶ¼�е�������Ϣ
�˳�ͨѶ¼���˳���ǰʹ�õ�ͨѶ¼
*/
#include<iostream>
#include "showMenu.h"
//#include "addperson.h"
using namespace std;
#define MAX 1000

//�����ϵ�˵Ľṹ��
struct person
{
	string m_name;
	int m_age;
	int m_gender;//   1��  2Ů
	string m_number; // ��ϵ�绰
	string m_addr;  // ��ͥסַ
};
// ���ͨѶ¼�ṹ��
struct Adressbooks
{
	//ͨѶ¼�б������ϵ��
	struct person personArray[MAX];
	//ͨѶ¼�е�ǰ��¼������
	int m_size;
};

//�����ϵ��
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
		int sex ;
		cout << "�������Ա�1->��  2->Ů��" << endl;
		
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
		abs->personArray[abs->m_size].m_gender = sex;
		//cout <<"sex = " << sex << endl;
		//cout << abs->personArray[abs->m_size].m_gender << endl;

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
//�˳����ܵ�ʵ��
//˼·�������û���ͬ��ѡ�񣬽��벻ͬ�Ĺ��ܣ�����ѡ��switch��֧�ṹ���������ܹ����д
// ���û�ѡ��0ʱ��ִ���˳���ѡ�������Ȳ���������Ҳ�����˳�

//��ʾ��ϵ��
void showperson(Adressbooks* abs)
{
	//�ж�ͨѶ¼�������Ƿ�Ϊ0�����Ϊ0����ʾ��¼Ϊ��
	//�����Ϊ0����ʾ��¼����ϵ����Ϣ
	if (abs->m_size == 0)
	{
		cout << "��ǰ�ļ�¼Ϊ��" << endl;
	}
	else
	{
		for (int i = 0; i < abs->m_size; i++)
		{
			cout << "������" << abs->personArray[i].m_name << "\t";
			cout << "�Ա�" << (abs->personArray[i].m_gender == 1 ? "��" : "Ů") << "\t";
			cout << "���䣺" << abs->personArray[i].m_age << "\t";
			cout << "�绰��" << abs->personArray[i].m_number << "\t";
			cout << "סַ��" << abs->personArray[i].m_addr << endl;
			cout << "\n" << endl;
		}
	}
	system("pause");
	system("cls");
}


//�����ϵ���Ƿ���ڣ�������ڣ�������ϵ�����������еľ���λ�ã������ھͷ��� -1
//����1  ͨѶ¼     ����2 �Ա�����
int isExist(Adressbooks* abs, string name)
{
	for (int i = 0; i < abs->m_size; i++)
	{
		if (abs->personArray[i].m_name == name)
		{
			return i;  // �ҵ��ˣ�����������������е��±���
		}
	}
	return -1; // �����������û���ҵ�������-1
}

//ɾ��ָ������ϵ��
void deleteperson(Adressbooks* abs)
{
	cout << "������ɾ����ϵ�˵�������" << endl;
	string name;
	cin >> name;

	//result = -1 û�ҵ�
	//result != -1  �ҵ���
	int result = isExist(abs, name);
	if (result != -1)
	{
		// Ҫɾ��ͨѶ¼�����飩�е�ĳ�����ݣ���Ҫɾ�������ݺ�������ݶ�ǰ��һλ�����飩��
		//������ͨѶ¼�м�¼����Ա������-1�Ĳ�������
		for (int i = result; i < abs->m_size; i++)
		{
			//����ǰ��
			abs->personArray[i] = abs->personArray[i + 1];
		}
		abs->m_size--; // ����ͨѶ¼�е���Ա��
		cout << "ɾ���ɹ�" << endl;
	}
	else
	{
		cout << "���޴���" << endl;
	}
	system("pause");
	system("cls");
}

//����ָ������ϵ����Ϣ
void findPerson(Adressbooks * abs)
{
	cout << "��������Ҫ���ҵ���ϵ�ˣ�" << endl;
	string name;
	cin >> name;
	//�ж�ָ������ϵ���Ƿ����ͨѶ¼��
	int ret = isExist(abs, name);
	if (ret != -1) //�ҵ���ϵ��
	{
		cout << "������" << abs->personArray[ret].m_name << "\t";
		cout << "�Ա�" << (abs->personArray[ret].m_gender == 1 ? "��" : "Ů") << "\t";
		cout << "���䣺" << abs->personArray[ret].m_age << "\t";
		cout << "�绰��" << abs->personArray[ret].m_number << "\t";
		cout << "סַ��" << abs->personArray[ret].m_addr << endl;
		cout << "\n" << endl;
	}
	else  //δ�ҵ���ϵ��
	{
		cout << "���޴���" << endl;
	}
	system("pause");
	system("cls");
}

//�޸�ָ������ϵ����Ϣ
void modifyperson(Adressbooks* abs)
{
	cout << "��������Ҫ�޸ĵ���ϵ��" << endl;
	string name;
	cin >> name;
	
	int ret = isExist(abs, name);
	if (ret != -1)
	{
		while (true)
		{
			int trying = 0;
			cout << "����Ҫ�޸�������Ϣ��1.����  2.�Ա�  3.����  4.��ϵ�绰  5.��ͥסַ  0.�˳��޸�" << endl;
			cin >> trying;
			switch (trying)  //�籨�����ƴ���������ʵ������˵����ĳһ��case��д�������࣬��Ҫ��{}
			{
			case 1:
			{
				cout << "ԭ�ȵ�����Ϊ��" << abs->personArray[ret].m_name << endl;
				string namechange;
				cout << "�޸�Ϊ��";
				cin >> namechange;
				abs->personArray[ret].m_name = namechange;
				cout << "�޸ĳɹ���\n" << endl;
				break;

			}
			case 2:
			{
				cout << "ԭ�ȵ��Ա�Ϊ��" << (abs->personArray[ret].m_gender == 1 ? "��" : "Ů") << endl;
				int genderchange;
				cout << "�޸�Ϊ��1->��  2->Ů";
				cin >> genderchange;
				abs->personArray[ret].m_gender = genderchange;
				cout << "�޸ĳɹ���\n" << endl;
				break;
			}
			case 3:
			{
				cout << "ԭ�ȵ�����Ϊ��" << abs->personArray[ret].m_age << endl;
				int agechange;
				cout << "�޸�Ϊ��";
				cin >> agechange;
				abs->personArray[ret].m_age = agechange;
				cout << "�޸ĳɹ���\n" << endl;
				break;
			}
			case 4:
			{
				cout << "ԭ�ȵ���ϵ�绰Ϊ��" << abs->personArray[ret].m_number << endl;
				string numchange;
				cout << "�޸�Ϊ��";
				cin >> numchange;
				abs->personArray[ret].m_number = numchange;
				cout << "�޸ĳɹ���\n" << endl;
				break;
			}
			case 5:
			{
				cout << "ԭ�ȵĵ�ַΪ��" << abs->personArray[ret].m_addr << endl;
				string addrchange;
				cout << "�޸�Ϊ��";
				cin >> addrchange;
				abs->personArray[ret].m_addr = addrchange;
				cout << "�޸ĳɹ���\n" << endl;
				break;
			}
			case 0:
			{
				cout << "���˳��޸�" << endl;
				system("pause");
				system("cls");
				return;
				break;
			}
			default:
				cout << "��Ǹ���������벻�Ϸ�����������������ѡ�" << endl;
				break;
			}

		}
	}
	else
	{
		cout << "��Ǹ���޷��޸ģ����޴��ˣ�" << endl;
	}
	system("pause");
	system("cls");
}

//�����ϵ�˺���
void clearperson(Adressbooks* abs)
{
	abs->m_size = 0;    //�ڴ�ռ��ֻ��m_size�йأ��½�һ����ϵ����������Ӧ���ڴ�
	cout << "ͨѶ¼�����" << endl;
	system("pause");
	system("cls");
}

int main()
{
	int select = 0; // �û�ѡ������ı���
	
	//����ͨѶ¼�ṹ�����
	Adressbooks abs;
	abs.m_size = 0;

	while (true)
	{
		//�˵��ĵ���
		showMenu();

		cin >> select;
		switch (select)
		{
		case 1:      //1�������ϵ��
			addperson(&abs);
			break;
		case 2:      //2����ʾ��ϵ��
			showperson(&abs);
			break;
		case 3:      //3��ɾ����ϵ��
		{
			deleteperson(&abs);
			break;
		}
		case 4:      //4��������ϵ��
			findPerson(&abs);
			break;
		case 5:      //5���޸���ϵ��
			modifyperson(&abs);
			break;
		case 6:      //6�������ϵ��
			clearperson(&abs);
			break;
		case 0:      //0���˳�ͨѶ¼
			cout << "��л����ʹ�ã��´��ټ�" << endl;
			system("pause");
			return 0;
			break;
		default:
			cout << "��Ǹ���������벻�Ϸ�����������������ѡ�" << endl;
			break;

		}
	}
	
	system("pause");
	return 0;
}