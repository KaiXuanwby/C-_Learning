//���һ��Ӣ�۵Ľṹ�壬������Ա�����������䣬�Ա𣻴����ṹ�����飬�����д��5��Ӣ��
//ͨ��ð��������㷨���������е�Ӣ�۰���������������������մ�ӡ�����Ľ��
//Ӣ����Ϣ����
/*
{ "����", 23, "��" },
{ "����",22,"��" },
{ "�ŷ�",20,"��" },
{ "����",21,"��" },
{ "����",19,"Ů" }
*/
#include<iostream>
using namespace std;
struct hero
{
	string name;
	int age;
	string gender;
};
void Sorthero(struct hero herolist[], int len)
{
	for (int i = 0; i < len - 1; i++)
	{
		for (int j = 0; j < len - i - 1; j++)
		{
			if (herolist[j].age > herolist[j + 1].age)
			{
				hero temp = herolist[j];
				herolist[j]= herolist[j + 1];
				herolist[j + 1] = temp;
			}
		}
	}
}
int main64()
{
	hero herolist[5] =
	{
		{ "����",23,"��" },
		{ "����",22,"��" },
		{ "�ŷ�",20,"��" },
		{ "����",21,"��" },
		{ "����",19,"Ů" }
	};
	int len = sizeof(herolist) / sizeof(herolist[0]);
	Sorthero(herolist, len);
	cout << "������heroΪ��";
	for (int i = 0; i < len; i++)
	{
		cout << "\n\t������" << herolist[i].name << "  ���䣺" << herolist[i].age 
			<< "  �Ա�" << herolist[i].gender;
		
	}
	cout <<"\n" << endl;
	system("pause");
	return 0;
}