// 多条件的fi语句：if(条件1){  条件1满足执行的语句  } else if(条件2){  条件2满足执行的语句  } ...... else{  都不满足执行的语句  }
#include<iostream>
using namespace std;
//// 输入一个分数，如果分数大于600分，视为考上一本大学，并在屏幕上打印
//大于500，视为考上二本大学，屏幕输出
//大于400，视为考上三本大学，屏幕输出
//小于等于400，视为未考上本科，屏幕上输出

int main19()
{
	int score = 0;
	cout << "请输入您的分数" << endl;
	cin >> score;
	cout << "您输入的分数为：" << score << endl;
	if (score > 600)
	{
		cout << "恭喜您，一本大学正在等你！" << endl;
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