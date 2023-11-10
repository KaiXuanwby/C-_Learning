// 案例描述：学校正在做毕业设计项目，每名老师带领五个学生，总共有三名老师，需求如下：
//设计学生和老师的结构体，其中在老师的结构体中，有老师姓名和一个存放5名学生的数组作为成员
//学生成员有姓名，考试分数，创建数组存放3名老师，通过函数给每个老师及所带的学生赋值
// 最终打印出老师数据以及老师所带的学生数据
#include<iostream>
#include<string>
#include<ctime>   //随机数种子
using namespace std;
typedef struct student
{
	string name;
	int score;
}stu;
typedef struct teacher
{
	string name;
	stu s[5];
}tea;

void value(struct teacher * teachers,int len)
{
	string nameseed = "ABCDE";
	for (int i = 0; i < len; i++)
	{
		teachers[i].name = "Teacher_";
		teachers[i].name += nameseed[i];
		for (int j = 0; j < 5; j++)
		{
			int random = rand() % 61 + 35;
			teachers[i].s[j].name = "Student_";
			teachers[i].s[j].name += nameseed[j];
			teachers[i].s[j].score = random;
		}
	}
}
int main63()
{
	//随机数种子
	srand((unsigned int)time(NULL));
	tea teachers[3];
	int len = sizeof(teachers) / sizeof(teachers[0]);
	value(teachers,len);
	for (int i = 0; i < len; i++)
	{
		cout << "老师姓名：" << teachers[i].name << endl;
		cout << "老师带的学生:";
		for (int j = 0; j < 5; j++)
		{
			cout << "\n\t姓名：" << teachers[i].s[j].name << "   学生分数："
				<< teachers[i].s[j].score << endl;
		}
		cout << "\n" << endl;
	}
	system("pause");
	return 0;
}