#include"addperson.h"

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
		int sex = 0;
		cout << "请输入性别：1->男  2->女：" << endl;
		abs->personArray[abs->m_size].m_gender = sex;
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