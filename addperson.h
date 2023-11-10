#include<iostream>
using namespace std;
#define MAX 1000

//设计联系人的结构体
struct person
{
	string m_name;
	int m_age;
	int m_gender;//   1男  2女
	string m_number; // 联系电话
	string m_addr;  // 家庭住址
};
// 设计通讯录结构体
struct Adressbooks
{
	//通讯录中保存的联系人
	struct person personArray[MAX];
	//通讯录中当前记录的人数
	int m_size;
};

void addperson(Adressbooks* abs);