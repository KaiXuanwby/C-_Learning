// 结构体中的成员可以是另一个结构体
// 例如：每一个老师辅导一个学员，一个老师的结构体中，记录一个学生的结构体
#include<iostream>
using namespace std;

struct Student
{
	//成员列表
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
	t.name = "凯旋";
	t.age = 25;
	t.stu.name = "王五";
	t.stu.age = 18;
	t.stu.score = 100;

	cout << "老师姓名：" << t.name << "\t老师编号：" << t.id << "\t老师年龄：" << t.age
		<< "\t老师的学生姓名：" << t.stu.name << "\t老师的学生年龄：" << t.stu.age
		<< "\t老师的学生分数：" << t.stu.score << endl;
	system("pause");
	return 0;
}