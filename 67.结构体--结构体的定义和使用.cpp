// �ṹ��Ļ�������ṹ�������û��Զ�����������ͣ������û��洢��ͬ����������
// �ṹ��Ķ����ʹ��
//�﷨��struct �ṹ���� { �ṹ���Ա�б� }��
//ͨ���ṹ�嶨������ķ�ʽ������
// struct �ṹ���� ������
// struct �ṹ���� ������ = {��Ա1ֵ�� ��Ա2ֵ��....}
// ����ṹ��ʱ˳�㴴������
#include<iostream>
using namespace std;

struct student
{
	//��Ա�б�
	string name;
	int age;
	int score;
}stu;// todo ˳�㴴���ṹ���������C���Բ�ͬ��C��struct����ĳ�Ա�����Ǻ�����C++�����Ǻ���

int main57()
{
	//��������ʱ��struct �ؼ��ֿ���ʡ��
	student s1;
	s1.name = "����";
	s1.age = 25;
	s1.score = 21;
	cout << "������" << s1.name << "\t���䣺" << s1.age << "\t�ɼ���" << s1.score << endl;

	struct student s2 = { "����",20,100 };
	cout << "������" << s2.name << "\t���䣺" << s2.age << "\t�ɼ���" << s2.score << endl;

	stu.name = "����";
	stu.age = 55;
	stu.score = 60;
	cout << "������" << stu.name << "\t���䣺" << stu.age << "\t�ɼ���" << stu.score << endl;

	
	system("pause");
	return 0;
}