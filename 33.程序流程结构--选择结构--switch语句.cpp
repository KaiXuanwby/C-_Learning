// 执行多条件的分支语句
// 语法：

/*switch (表达式)
{
	case 结果1:    执行语句;  break;
	case 结果2:    执行语句;  break;
	.......
	default :    执行语句;  break;
}
*/
#include<iostream>
using namespace std;

int main23()
{
	int score = 0;
	// 给电影打分
	cout << "请给电影进行打分：" << endl;
	cin >> score;
	cout << "您打的分数为：" << score << endl;
	switch (score)      // switch后的括号里写，依据什么条件进行不同的分支
	{
	case 10:
		cout << "您认为是经典电影" << endl;
		break;    // 退出当前的分支
	case 9:
		cout << "您认为是经典电影" << endl;
		break;
	case 8:
		cout << "您认为电影还不错" << endl;
		break;
	case 7:
		cout << "您认为电影还不错" << endl;
		break;
	case 6:
		cout << "您认为电影一般" << endl;
		break;
	case 5:
		cout << "您认为电影一般" << endl;
		break;
	default :
		cout << "您认为该电影不应该上映" << endl;
		break;
	}
	
	system("pause");
	return 0;
}
//if 和 switch的区别？
/*
switch缺点：判断的时候只能是整型或者字符型，不可以是一个区间
switch优点：结构清晰，执行效率高
*/