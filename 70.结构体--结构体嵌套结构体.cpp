// �ṹ���еĳ�Ա��������һ���ṹ��
// ���磺ÿһ����ʦ����һ��ѧԱ��һ����ʦ�Ľṹ���У���¼һ��ѧ���Ľṹ��
#include<iostream>
using namespace std;

struct Student
{
	//��Ա�б�
	string name;
	int age;
	int score;
};

struct Teacher
{
	int id;
	string name;
	int age;
	struct Student stu;
};
int main60()
{
	Teacher t;
	t.id = 100001;
	t.name = "����";
	t.age = 25;
	t.stu.name = "����";
	t.stu.age = 18;
	t.stu.score = 100;

	cout << "��ʦ������" << t.name << "\t��ʦ��ţ�" << t.id << "\t��ʦ���䣺" << t.age
		<< "\t��ʦ��ѧ��������" << t.stu.name << "\t��ʦ��ѧ�����䣺" << t.stu.age
		<< "\t��ʦ��ѧ��������" << t.stu.score << endl;
	system("pause");
	return 0;
}