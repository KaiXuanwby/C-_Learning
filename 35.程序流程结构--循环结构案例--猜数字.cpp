// while循环案例
// 系统随机生成一个1到 100之间的数字，玩家进行猜测，如果猜错，提示玩家数字过大或过小，猜对恭喜胜利，并且退出游戏
#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main25()
{
	// 系统生成随机数
	srand((int)time(0));         // 如果不加这行代码，生成的随机数每次都是一样的
	//srand((unsigned int)time(NULL));   //  这个也可以
	int num = rand() % 100 + 1;
	//   生成随机数的区间是0-99  ，+1生成0+1~~99+1 随机数
	int guess = 0;
	int time = 1;
	cout << "请您猜一个1-100之间的数：";
	cin >> guess;
	while (guess != num)
	{
		if (guess > num)
		{
			cout << "您猜的数太大了，请再猜一次" << endl;;
			cout << "请您猜一个1-100之间的数：";
			cin >> guess;
		}
		else
		{
			cout << "您猜的数太小了，请再猜一次" << endl;;
			cout << "请您猜一个1-100之间的数：";
			cin >> guess;
		}
		time++;
		cout << "您已经猜了" << time << "次，加油" << endl;
	}
	cout << "恭喜您，猜对了" << endl;
	system("pause");
	return 0;
}