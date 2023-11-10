//将自定义的结构体放入到数组中方便维护
//语法： struct 结构体名 数组名[ 元素个数 ] = {{}，{}，{}.....{}}
#include<iostream>
using namespace std;

struct Student
{
	//成员列表
	string name;
	int age;
	int score;
};

int main58()
{
	struct Student stuarray[3] =
	{
		{"张三",18,100},
		{"凯旋",20,666},
		{"李四",52,750}

	};
	// 可以对数组中元素的特征进行重写
	stuarray[0].name = "王五";
	stuarray[0].age = 85;

	for (int i = 0; i < 3; i++)
	{
		cout << "姓名：" << stuarray[i].name 
			<< "\t年龄：" << stuarray[i].age 
			<< "\t成绩：" << stuarray[i].score << endl;
	}
	system("pause");
	return 0;
}