// ͨ��ָ����ʽṹ���еĳ�Ա
// ���ò�����->����ͨ���ṹ��ָ����ʽṹ�����ԣ�->�����ֽм�ӳ�Ա�������
#include<iostream>
using namespace std;

struct Student
{
	//��Ա�б�
	string name;
	int age;
	int score;
};

int main59()
{
	Student s = { "����",20,532 };
	Student* p = &s;
	// ͨ���ṹ��ָ����ʽṹ���е����ԣ���Ҫ����  '->'
	cout << "������" << p->name << "\t���䣺" << p->age << "\t�ɼ���" << p->score << endl;
	system("pause");
	return 0;
}