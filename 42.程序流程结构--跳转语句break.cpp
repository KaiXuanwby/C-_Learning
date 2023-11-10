// 用于跳出选择结构或者循环结构
// break使用的时机：
//出现在 switch条件语句中，作用是终止case并跳出switch
//出现在循环语句中，作用是跳出当前的循环语句
//出现在嵌套循环中，跳出最近的内层循环语句

#include<iostream>
using namespace std;

int main32()
{
	
	// switch语句中
	cout << "请选择副本的难度" << endl;
	cout << "1.普通" << endl;
	cout << "2.中等" << endl;
	cout << "3.困难" << endl;
	int select = 0;
	cin >> select;
	switch (select) 
	{
	case 1:
		cout << "您选择的是普通难度 " << endl;  break;
	case 2:
		cout << "您选择的是中等难度 " << endl;  break;
	case 3:
		cout << "您选择的是困难难度 " << endl;  break;
	default:
		break;
	}

	//循环语句中
	for (int i = 0; i < 10; i++)
	{
		cout << i << endl;
		if (i == 5)
		{
			break;
		}
	}
	
	//嵌套
	for (int k = 0; k < 10; k++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (j == 5) 
			{
				break;
			}
				
			cout << "*";
		}
		cout << endl;
	}
	system("pause");
	return 0;
}