//作用：用于表示一串字符
//两种风格：C语言字符串    char 变量名[] = "字符串值"
// C++： string 变量名 = “字符串值”
//C语言
#include<iostream>
#include<string>     //在现版本的编译器中，若使用string 变量名 = “字符串值”，无需再特别声明string头文件
using namespace std;

int main09()
{
	//C
	char str1[] = "hello world!";     //注意：C语言风格的字符串需要用双引号括起来,等号前要有方括号
	cout << str1 << endl;
	//C++
	string str2 = "你好，凯旋";
	cout << str2 << endl;
	system("pause");
	return 0;
	
}

