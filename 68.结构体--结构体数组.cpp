//���Զ���Ľṹ����뵽�����з���ά��
//�﷨�� struct �ṹ���� ������[ Ԫ�ظ��� ] = {{}��{}��{}.....{}}
#include<iostream>
using namespace std;

struct Student
{
	//��Ա�б�
	string name;
	int age;
	int score;
};

int main58()
{
	struct Student stuarray[3] =
	{
		{"����",18,100},
		{"����",20,666},
		{"����",52,750}

	};
	// ���Զ�������Ԫ�ص�����������д
	stuarray[0].name = "����";
	stuarray[0].age = 85;

	for (int i = 0; i < 3; i++)
	{
		cout << "������" << stuarray[i].name 
			<< "\t���䣺" << stuarray[i].age 
			<< "\t�ɼ���" << stuarray[i].score << endl;
	}
	system("pause");
	return 0;
}