// 系统中需要实现的功能如下
/*
添加联系人：向通讯录中添加新人，信息包括（姓名，性别，年龄，联系电话，家庭住址）最多记录1000人
		设计联系人结构体；设计通讯录结构体；main函数中创建通讯录；封装添加联系人函数；测试添加联系人功能
		联系人信息包括：姓名，性别，年龄，联系电话，家庭住址
显示联系人：显示通讯录中所有联系人的信息
删除联系人：按照姓名进行删除指定联系人
查找联系人：按照姓名查看指定联系人信息
修改联系人：按照姓名重新修改指定联系人
清空联系人：清空通讯录中的所有信息
退出通讯录：退出当前使用的通讯录
*/
#include<iostream>
#include "showMenu.h"
//#include "addperson.h"
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

//添加联系人
void addperson(Adressbooks* abs)
{
	// 判断通讯录是否已满，如果满了就不再添加
	if (abs->m_size == MAX)
	{
		cout << "通讯录已满，无法添加！" << endl;
		return;
	}
	else
	{
		// 添加具体联系人
		//姓名
		string name;
		cout << "请输入姓名：" << endl;
		cin >> name;
		abs->personArray[abs->m_size].m_name = name;
		// 性别
		int sex ;
		cout << "请输入性别：1->男  2->女：" << endl;
		
		while (true)
		{
			cin >> sex;
			if (sex == 1)
			{
				cout << "男" << endl;
				break;
			}
			else if (sex == 2)
			{
				cout << "女" << endl;
				break;
			}
			else
			{
				cout << "您的输入不合法，请重输" << endl;

			}
		}
		abs->personArray[abs->m_size].m_gender = sex;
		//cout <<"sex = " << sex << endl;
		//cout << abs->personArray[abs->m_size].m_gender << endl;

		// 年龄
		int age = 0;
		cout << "请输入年龄：" << endl;
		cin >> age;
		abs->personArray[abs->m_size].m_age = age;
		// 电话
		string phone;
		cout << "请输入电话号码：" << endl;
		cin >> phone;
		abs->personArray[abs->m_size].m_number = phone;
		//住址
		string location;
		cout << "请输入家庭住址：" << endl;
		cin >> location;
		abs->personArray[abs->m_size].m_addr = location;
		// 更新通讯录人数
		abs->m_size++;
		cout << "添加成功" << endl;

		system("pause");//请按任意键继续
		system("cls");//清屏
	}
}
//退出功能的实现
//思路：根据用户不同的选择，进入不同的功能，可以选择switch分支结构，将整个架构进行搭建
// 当用户选择0时，执行退出，选择其他先不做操作，也不会退出

//显示联系人
void showperson(Adressbooks* abs)
{
	//判断通讯录中人数是否为0，如果为0，提示记录为空
	//如果不为0，显示记录的联系人信息
	if (abs->m_size == 0)
	{
		cout << "当前的记录为空" << endl;
	}
	else
	{
		for (int i = 0; i < abs->m_size; i++)
		{
			cout << "姓名：" << abs->personArray[i].m_name << "\t";
			cout << "性别：" << (abs->personArray[i].m_gender == 1 ? "男" : "女") << "\t";
			cout << "年龄：" << abs->personArray[i].m_age << "\t";
			cout << "电话：" << abs->personArray[i].m_number << "\t";
			cout << "住址：" << abs->personArray[i].m_addr << endl;
			cout << "\n" << endl;
		}
	}
	system("pause");
	system("cls");
}


//检测联系人是否存在，如果存在，返回联系人所在数组中的具体位置，不存在就返回 -1
//参数1  通讯录     参数2 对比姓名
int isExist(Adressbooks* abs, string name)
{
	for (int i = 0; i < abs->m_size; i++)
	{
		if (abs->personArray[i].m_name == name)
		{
			return i;  // 找到了，返回这个人在数组中的下标编号
		}
	}
	return -1; // 如果遍历结束没有找到，返回-1
}

//删除指定的联系人
void deleteperson(Adressbooks* abs)
{
	cout << "请输入删除联系人的姓名：" << endl;
	string name;
	cin >> name;

	//result = -1 没找到
	//result != -1  找到了
	int result = isExist(abs, name);
	if (result != -1)
	{
		// 要删除通讯录（数组）中的某个数据，将要删除的数据后面的数据都前移一位（数组），
		//并且让通讯录中记录的人员个数做-1的操作即可
		for (int i = result; i < abs->m_size; i++)
		{
			//数据前移
			abs->personArray[i] = abs->personArray[i + 1];
		}
		abs->m_size--; // 更新通讯录中的人员数
		cout << "删除成功" << endl;
	}
	else
	{
		cout << "查无此人" << endl;
	}
	system("pause");
	system("cls");
}

//查找指定的联系人信息
void findPerson(Adressbooks * abs)
{
	cout << "请输入您要查找的联系人：" << endl;
	string name;
	cin >> name;
	//判断指定的联系人是否存在通讯录中
	int ret = isExist(abs, name);
	if (ret != -1) //找到联系人
	{
		cout << "姓名：" << abs->personArray[ret].m_name << "\t";
		cout << "性别：" << (abs->personArray[ret].m_gender == 1 ? "男" : "女") << "\t";
		cout << "年龄：" << abs->personArray[ret].m_age << "\t";
		cout << "电话：" << abs->personArray[ret].m_number << "\t";
		cout << "住址：" << abs->personArray[ret].m_addr << endl;
		cout << "\n" << endl;
	}
	else  //未找到联系人
	{
		cout << "查无此人" << endl;
	}
	system("pause");
	system("cls");
}

//修改指定的联系人信息
void modifyperson(Adressbooks* abs)
{
	cout << "请输入您要修改的联系人" << endl;
	string name;
	cin >> name;
	
	int ret = isExist(abs, name);
	if (ret != -1)
	{
		while (true)
		{
			int trying = 0;
			cout << "您需要修改哪项信息？1.姓名  2.性别  3.年龄  4.联系电话  5.家庭住址  0.退出修改" << endl;
			cin >> trying;
			switch (trying)  //如报错，控制传输跳过的实例化，说明在某一个case中写的语句过多，需要加{}
			{
			case 1:
			{
				cout << "原先的姓名为：" << abs->personArray[ret].m_name << endl;
				string namechange;
				cout << "修改为：";
				cin >> namechange;
				abs->personArray[ret].m_name = namechange;
				cout << "修改成功！\n" << endl;
				break;

			}
			case 2:
			{
				cout << "原先的性别为：" << (abs->personArray[ret].m_gender == 1 ? "男" : "女") << endl;
				int genderchange;
				cout << "修改为：1->男  2->女";
				cin >> genderchange;
				abs->personArray[ret].m_gender = genderchange;
				cout << "修改成功！\n" << endl;
				break;
			}
			case 3:
			{
				cout << "原先的年龄为：" << abs->personArray[ret].m_age << endl;
				int agechange;
				cout << "修改为：";
				cin >> agechange;
				abs->personArray[ret].m_age = agechange;
				cout << "修改成功！\n" << endl;
				break;
			}
			case 4:
			{
				cout << "原先的联系电话为：" << abs->personArray[ret].m_number << endl;
				string numchange;
				cout << "修改为：";
				cin >> numchange;
				abs->personArray[ret].m_number = numchange;
				cout << "修改成功！\n" << endl;
				break;
			}
			case 5:
			{
				cout << "原先的地址为：" << abs->personArray[ret].m_addr << endl;
				string addrchange;
				cout << "修改为：";
				cin >> addrchange;
				abs->personArray[ret].m_addr = addrchange;
				cout << "修改成功！\n" << endl;
				break;
			}
			case 0:
			{
				cout << "已退出修改" << endl;
				system("pause");
				system("cls");
				return;
				break;
			}
			default:
				cout << "抱歉，您的输入不合法！请重新输入您的选项！" << endl;
				break;
			}

		}
	}
	else
	{
		cout << "抱歉，无法修改，查无此人！" << endl;
	}
	system("pause");
	system("cls");
}

//清空联系人函数
void clearperson(Adressbooks* abs)
{
	abs->m_size = 0;    //内存占用只跟m_size有关，新建一个联系人则新增相应的内存
	cout << "通讯录已清空" << endl;
	system("pause");
	system("cls");
}

int main()
{
	int select = 0; // 用户选择输入的变量
	
	//创建通讯录结构体变量
	Adressbooks abs;
	abs.m_size = 0;

	while (true)
	{
		//菜单的调用
		showMenu();

		cin >> select;
		switch (select)
		{
		case 1:      //1、添加联系人
			addperson(&abs);
			break;
		case 2:      //2、显示联系人
			showperson(&abs);
			break;
		case 3:      //3、删除联系人
		{
			deleteperson(&abs);
			break;
		}
		case 4:      //4、查找联系人
			findPerson(&abs);
			break;
		case 5:      //5、修改联系人
			modifyperson(&abs);
			break;
		case 6:      //6、清空联系人
			clearperson(&abs);
			break;
		case 0:      //0、退出通讯录
			cout << "感谢您的使用，下次再见" << endl;
			system("pause");
			return 0;
			break;
		default:
			cout << "抱歉，您的输入不合法！请重新输入您的选项！" << endl;
			break;

		}
	}
	
	system("pause");
	return 0;
}