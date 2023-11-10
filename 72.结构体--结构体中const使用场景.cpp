// 用const防止误操作
#include<iostream>
using namespace std;

typedef struct Student   // todotypedef表示重命名，使用后结构体最后的  }stu;  不再表示结构体变量，而是结构体的新名字
{
	string name;
	int age;
	int score;
}stu;

//将函数中的新参改为指针，可以减少内存空间不必要的占用
void printstu3( const struct Student* s)  // 常量指针
{
	cout << "在子函数printstu2中打印输出结构体变量：";
	cout << "  姓名：" << s->name << "  年龄：" << s->age << "  成绩：" << s->score << endl;
}

int main62()
{
	stu s1 = { "凯旋",20,451 };
	//通过函数打印结构体变量的信息
	printstu3(&s1);
	cout << "在main函数中打印输出结构体变量：";
	cout << "  姓名：" << s1.name << "  年龄：" << s1.age << "  成绩：" << s1.score << endl;
	system("pause");
	return 0;
}