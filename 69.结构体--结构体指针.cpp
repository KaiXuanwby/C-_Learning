// 通过指针访问结构体中的成员
// 利用操作符->可以通过结构体指针访问结构体属性（->：名字叫间接成员运算符）
#include<iostream>
using namespace std;

struct Student
{
	//成员列表
	string name;
	int age;
	int score;
};

int main59()
{
	Student s = { "凯旋",20,532 };
	Student* p = &s;
	// 通过结构体指针访问结构体中的属性，需要利用  '->'
	cout << "姓名：" << p->name << "\t年龄：" << p->age << "\t成绩：" << p->score << endl;
	system("pause");
	return 0;
}