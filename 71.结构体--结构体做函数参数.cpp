//���ṹ����Ϊ���������д���
// ���ݷ�ʽ��ֵ���ݣ���ַ����
#include<iostream>
using namespace std;

typedef struct Student   // todotypedef��ʾ��������ʹ�ú�ṹ������  }stu;  ���ٱ�ʾ�ṹ����������ǽṹ���������
{
	string name;
	int age;
	int score;
}stu;//   �����֣�ͬʱԭ���Ľṹ�崴��ʱ�ķ�ʽҲ����ʹ��
 
// ֵ����
void printstu1(struct Student s)
{
	s.age = 30;
	cout << "���Ӻ���printstu1�д�ӡ����ṹ�������";
	cout << "������" << s.name << "\t���䣺" << s.age << "\t�ɼ���" << s.score << endl;
}
//��ַ����
void printstu2(struct Student* s)
{
	s->age = 30;
	cout << "���Ӻ���printstu2�д�ӡ����ṹ�������";
	cout << "������" << s->name << "\t���䣺" << s->age << "\t�ɼ���" << s->score << endl;
}

int main61()
{
	//��ѧ�����뵽һ�������У���ӡѧ�����ϵ�������Ϣ
	stu s1 = { "����",20,451 };
	cout << "��main�����д�ӡ����ṹ�������";
	cout << "������" << s1.name << "\t���䣺" << s1.age << "\t�ɼ���" << s1.score << endl;
	printstu1(s1);
	printstu2(&s1);
	cout << "��main�����д�ӡ����ṹ�������";
	cout << "������" << s1.name << "\t���䣺" << s1.age << "\t�ɼ���" << s1.score << endl;
	system("pause");
	return 0;
}