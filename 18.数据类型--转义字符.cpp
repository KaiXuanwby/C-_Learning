// 作用：用于表示一些不能显示出来的ASCII字符
// 常用的转义字符有： \n   \\  \t
//gpt 请输出所有转义字符及其含义，和它代表的ASCII码值
//转义字符	含义	ASCII码值
/*

	\a	警告/响铃	07/007
	\b	退格，将当前位置移到前一列	08/008
	\f	换页	，将当前位置移动到下一页开头   0C/012
	\n	换行	，将当前位置移到下一行开头   0A/010
	\r	回车	，将当前位置移动到本行开头  0D/013
	\t	水平制表符，跳到下一个TAB位置	09/009
	\v	垂直制表符	0B/011
	\\	反斜杠，代表一个反斜杠字符\	5C/092
	\'	单引号	27/039
	\"	双引号	22/034
	\?	问号	3F/063

*/
#include<iostream>
using namespace std;

int main08()
{
	cout << "hello world!" << endl;
	cout << "hello world!\n";
	// 输出结果相同
	cout << "\\" << endl;   // 输出一个反斜杠
	cout << "aaa\thello world!" << endl;
	cout << "aaaa\thello world!" << endl;
	cout << "aaaaaaaa\thello world!" << endl;    //  \t输出八个空格：从开始数到输出位置，不够8就补齐，够了或是8的倍数就直接输出8给空格
	system("pause");
	return 0;
}