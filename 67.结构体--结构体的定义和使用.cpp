// 结构体的基本概念：结构体属于用户自定义的数据类型，允许用户存储不同的数据类型
// 结构体的定义和使用
//语法：struct 结构体名 { 结构体成员列表 }；
//通过结构体定义变量的方式有三种
// struct 结构体名 变量名
// struct 结构体名 变量名 = {成员1值， 成员2值，....}
// 定义结构体时顺便创建变量
#include<iostream>
using namespace std;

struct student
{
	//成员列表
	string name;
	int age;
	int score;
}stu;// todo 顺便创建结构体变量，和C语言不同，C的struct里面的成员不能是函数，C++可以是函数

int main57()
{
	//创建变量时的struct 关键字可以省略
	student s1;
	s1.name = "张三";
	s1.age = 25;
	s1.score = 21;
	cout << "姓名：" << s1.name << "\t年龄：" << s1.age << "\t成绩：" << s1.score << endl;

	struct student s2 = { "凯旋",20,100 };
	cout << "姓名：" << s2.name << "\t年龄：" << s2.age << "\t成绩：" << s2.score << endl;

	stu.name = "王五";
	stu.age = 55;
	stu.score = 60;
	cout << "姓名：" << stu.name << "\t年龄：" << stu.age << "\t成绩：" << stu.score << endl;

	
	system("pause");
	return 0;
}