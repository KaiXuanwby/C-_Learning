// ����������ѧУ��������ҵ�����Ŀ��ÿ����ʦ�������ѧ�����ܹ���������ʦ���������£�
//���ѧ������ʦ�Ľṹ�壬��������ʦ�Ľṹ���У�����ʦ������һ�����5��ѧ����������Ϊ��Ա
//ѧ����Ա�����������Է���������������3����ʦ��ͨ��������ÿ����ʦ��������ѧ����ֵ
// ���մ�ӡ����ʦ�����Լ���ʦ������ѧ������
#include<iostream>
#include<string>
#include<ctime>   //���������
using namespace std;
typedef struct student
{
	string name;
	int score;
}stu;
typedef struct teacher
{
	string name;
	stu s[5];
}tea;

void value(struct teacher * teachers,int len)
{
	string nameseed = "ABCDE";
	for (int i = 0; i < len; i++)
	{
		teachers[i].name = "Teacher_";
		teachers[i].name += nameseed[i];
		for (int j = 0; j < 5; j++)
		{
			int random = rand() % 61 + 35;
			teachers[i].s[j].name = "Student_";
			teachers[i].s[j].name += nameseed[j];
			teachers[i].s[j].score = random;
		}
	}
}
int main63()
{
	//���������
	srand((unsigned int)time(NULL));
	tea teachers[3];
	int len = sizeof(teachers) / sizeof(teachers[0]);
	value(teachers,len);
	for (int i = 0; i < len; i++)
	{
		cout << "��ʦ������" << teachers[i].name << endl;
		cout << "��ʦ����ѧ��:";
		for (int j = 0; j < 5; j++)
		{
			cout << "\n\t������" << teachers[i].s[j].name << "   ѧ��������"
				<< teachers[i].s[j].score << endl;
		}
		cout << "\n" << endl;
	}
	system("pause");
	return 0;
}