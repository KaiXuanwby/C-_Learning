#include<iostream>
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

void addperson(Adressbooks* abs);