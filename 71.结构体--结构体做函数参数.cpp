//将结构体作为参数向函数中传递
// 传递方式：值传递，地址传递
#include<iostream>
using namespace std;

typedef struct Student   // todotypedef表示重命名，使用后结构体最后的  }stu;  不再表示结构体变量，而是结构体的新名字
{
	string name;
	int age;
	int score;
}stu;//   新名字，同时原来的结构体创建时的方式也可以使用
 
// 值传递
void printstu1(struct Student s)
{
	s.age = 30;
	cout << "在子函数printstu1中打印输出结构体变量：";
	cout << "姓名：" << s.name << "\t年龄：" << s.age << "\t成绩：" << s.score << endl;
}
//地址传递
void printstu2(struct Student* s)
{
	s->age = 30;
	cout << "在子函数printstu2中打印输出结构体变量：";
	cout << "姓名：" << s->name << "\t年龄：" << s->age << "\t成绩：" << s->score << endl;
}

int main61()
{
	//将学生传入到一个参数中，打印学生身上的所有信息
	stu s1 = { "凯旋",20,451 };
	cout << "在main函数中打印输出结构体变量：";
	cout << "姓名：" << s1.name << "\t年龄：" << s1.age << "\t成绩：" << s1.score << endl;
	printstu1(s1);
	printstu2(&s1);
	cout << "在main函数中打印输出结构体变量：";
	cout << "姓名：" << s1.name << "\t年龄：" << s1.age << "\t成绩：" << s1.score << endl;
	system("pause");
	return 0;
}