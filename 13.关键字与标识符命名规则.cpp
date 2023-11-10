//关键字：关键字是C++中预先保留的单词（标识符）
//在定义常量或者变量时，不能用关键字
//gpt C++中的关键字有哪些，有什么办法可以一键输出这些关键字
//C++中的关键字有：
//auto, break, case, char, const, continue, default, do, double, else, enum, extern,
//float, for, goto, if, int, long, register, return, short, signed, sizeof, static, 
//struct, switch, typedef, union, unsigned, void, volatile, while.

//可以使用C++编译器提供的API函数，如cppkeywords()来输出这些关键字。
//gpt 提供一个使用cppkeywords的案例来输出C++中的关键字

//#include<cppkeywords.h>
#include<iostream>
using namespace std;

int main03()
{
	//cppkeywords()
	system("pause");
	return 0;
}

//标识符命名规则：C++规定给标识符（变量、常量）命名时，有一套自己的规则
/*
	标识符不能是关键字
	标识符只能由字母、数字、下划线组成
	第一个字符必须为字母或下划线
	标识符中字母区分大小写
*/