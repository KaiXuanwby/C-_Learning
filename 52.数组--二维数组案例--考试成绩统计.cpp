// 描述：有三名同学（张三，李四，王五），在一次考试中的成绩分别如下表，请分别输出这三名同学的总成绩
#include<iostream>
using namespace std;

int main42()
{
	int arr[3][3] =
	{
		{100,100,100},
		{90,50,100},
		{60,70,80}
	};
	/*int arr2[3];*/
	string names[3] = { "张三","李四","王五" };
	int sum = 0;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			
			sum += arr[i][j];
		}
		/*arr2[i] = sum;*/
		cout << "第" << i + 1 << "行元素的和为" << sum << endl;
		cout << names[i] << "的成绩为" << sum << endl;
		sum = 0;
	}
	/*cout << "张三的成绩为：" << arr2[0] << endl;
	cout << "李四的成绩为：" << arr2[1] << endl;
	cout << "王五的成绩为：" << arr2[2] << endl;*/
	system("pause");
	return 0;
}