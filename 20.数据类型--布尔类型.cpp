//布尔类型代表真或者假的值
//bool类型只有两个值true（真）,false（假），布尔类型占一个字节大小
#include<iostream>
using namespace std;

int main10()
{
	bool flag = true;
	cout << flag << endl; //1

	flag = false;
	cout << flag << endl; //0
	//本质上1代表真，0代表假
	cout << "bool类型占据字节的大小为：" << sizeof(bool) << "字节" << endl; //1

	system("pause");
	return 0;
}