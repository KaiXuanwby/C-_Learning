// ��const��ֹ�����
#include<iostream>
using namespace std;

typedef struct Student   // todotypedef��ʾ��������ʹ�ú�ṹ������  }stu;  ���ٱ�ʾ�ṹ����������ǽṹ���������
{
	string name;
	int age;
	int score;
}stu;

//�������е��²θ�Ϊָ�룬���Լ����ڴ�ռ䲻��Ҫ��ռ��
void printstu3( const struct Student* s)  // ����ָ��
{
	cout << "���Ӻ���printstu2�д�ӡ����ṹ�������";
	cout << "  ������" << s->name << "  ���䣺" << s->age << "  �ɼ���" << s->score << endl;
}

int main62()
{
	stu s1 = { "����",20,451 };
	//ͨ��������ӡ�ṹ���������Ϣ
	printstu3(&s1);
	cout << "��main�����д�ӡ����ṹ�������";
	cout << "  ������" << s1.name << "  ���䣺" << s1.age << "  �ɼ���" << s1.score << endl;
	system("pause");
	return 0;
}