//在if语句中，嵌套使用if语句，达到更精确的条件判断
//案例需求：
//提示用户输入一个高考考试分数，做如下判断
//如果分数大于600分，视为考上一本大学，并在屏幕上打印
//大于500，视为考上二本大学，屏幕输出
//大于400，视为考上三本大学，屏幕输出
//小于等于400，视为未考上本科，屏幕上输出
//在一本分数中，如果大于700，考入北大，大于650，考入清华，大于600考入人大
#include<iostream>
using namespace std;

int main20()
{
	int score = 0;
	cout << "请输入您的分数" << endl;
	cin >> score;
	cout << "您输入的分数为：" << score << endl;
	if (score > 600)
	{
		if (score > 700)
		{
			cout << "恭喜您，北京大学正在等你！" << endl;
		}
		else if (score > 650)
		{
			cout << "恭喜您，清华大学正在等你！" << endl;
		}
		else
		{
			cout << "恭喜您，中国人民大学正在等你！" << endl;
		}
	}
	else if (score <= 600 && score > 500)
	{
		cout << "恭喜您，二本大学正在等你！" << endl;
	}
	else if (score <= 500 && score > 400)
	{
		cout << "恭喜您，三本大学正在等你！" << endl;
	}
	else
	{
		cout << "抱歉，您的分数不佳，未能考上大学，请再接再厉！" << endl;
	}
	system("pause");
	return 0;
}