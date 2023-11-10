// 最常用的排序算法，对数组内元素进行排序
// 比较相邻的元素，如果第一个比第二个大，就交换他们两个
// 对每一对相邻元素做同样的工作，执行完毕后，找到第一个最大值
// 重复以上的步骤，每次比较次数减一，直到不需要比较
#include<iostream>
using namespace std;

int main39()
{
	int arr[9] = { 4,2,8,0,5,7,1,3,9 };
	cout << "排序前：";
	for (int k = 0; k < 9; k++)
	{
		cout << arr[k] << "  ";
	}
	cout << endl;
	//外层循环： 排序总轮数
	for (int i = 0; i < _countof(arr) - 1; i++)  // 每一次都选出最大的放在最后，一旦放好，就不再参与排序
	{
		//内层循环：每轮对比次数
		for (int j = 0; j < _countof(arr) - 1 - i; j++)  // 排序总轮数 = 元素个数 -1
		{                                                // 每轮对比次数 = 元素个数 - 排序轮数-1
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	cout << "排序后：";
	for (int k = 0; k < 9; k++)
	{
		cout << arr[k] << "  ";
	}
	cout << endl;
	system("pause");
	return 0;
}