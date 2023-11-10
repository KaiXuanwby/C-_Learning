//用于从键盘获取数据
//关键字：cin
//语法：cin >> 变量
#include<iostream>
using namespace std;

int main11()
{
	//整型输入
	int a = 0;
	cout << "请输入整型变量：" << endl;
	cin >> a;
	cout << a << endl;

	//浮点型输入
	double b = 0;
	cout << "请输入浮点型变量：" << endl;
	cin >> b;
	cout << b << endl;

	//字符型输入
	char c = 'a';
	cout << "请输入字符型变量：" << endl;
	cin >> c;
	cout << c << endl;

	//字符串型输入
	string d = "hello";
	cout << "请输入字符串型变量：" << endl;
	cin >> d;
	cout << d << endl;

	//布尔类型输入
	bool e = true;
	cout << "请输入布尔类型变量：" << endl;
	cin >> e;  //bool类型，只要是非0的值都代表真
	cout << e << endl;

	
	system("pause");
	return 0;
}