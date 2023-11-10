//设计一个英雄的结构体，包括成员的姓名，年龄，性别；创建结构体数组，数组中存放5名英雄
//通过冒泡排序的算法，将数组中的英雄按照年龄进行升序排序，最终打印排序后的结果
//英雄信息如下
/*
{ "刘备", 23, "男" },
{ "关羽",22,"男" },
{ "张飞",20,"男" },
{ "赵云",21,"男" },
{ "貂蝉",19,"女" }
*/
#include<iostream>
using namespace std;
struct hero
{
	string name;
	int age;
	string gender;
};
void Sorthero(struct hero herolist[], int len)
{
	for (int i = 0; i < len - 1; i++)
	{
		for (int j = 0; j < len - i - 1; j++)
		{
			if (herolist[j].age > herolist[j + 1].age)
			{
				hero temp = herolist[j];
				herolist[j]= herolist[j + 1];
				herolist[j + 1] = temp;
			}
		}
	}
}
int main64()
{
	hero herolist[5] =
	{
		{ "刘备",23,"男" },
		{ "关羽",22,"男" },
		{ "张飞",20,"男" },
		{ "赵云",21,"男" },
		{ "貂蝉",19,"女" }
	};
	int len = sizeof(herolist) / sizeof(herolist[0]);
	Sorthero(herolist, len);
	cout << "排序后的hero为：";
	for (int i = 0; i < len; i++)
	{
		cout << "\n\t姓名：" << herolist[i].name << "  年龄：" << herolist[i].age 
			<< "  性别：" << herolist[i].gender;
		
	}
	cout <<"\n" << endl;
	system("pause");
	return 0;
}