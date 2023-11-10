//多行格式if语句：if(条件)  {条件满足执行的语句}  else  {条件满足执行的语句}
#include<iostream>
using namespace std;

int main18()
{
	// 输入一个分数，如果分数大于600分，视为考上一本大学，并在屏幕上打印，反之，打印没有
	int score = 0;
	cout << "请输入您的分数" << endl;
	cin >> score;
	cout << "您输入的分数为：" << score << endl;
	if (score > 600)
	{
		cout << "恭喜您，一本大学正在等你！" << endl;
	}
	else
	{
		cout << "抱歉，您的分数距离一本仍有差距" << endl;
	}
	system("pause");
	return 0;
}