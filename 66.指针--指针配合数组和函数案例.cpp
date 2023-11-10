// 案例描述：封装一个函数，实现对整型数组的升序排序
// 例如数组 int arr[10] = {4,3,6,9,1,2,10,8,7,5}
#include<iostream>
#include"bubbleSort.h"
using namespace std;

// 冒泡法排序
//void bubbleSort(int* arr, int len) //  int * arr 也可以写为int arr[ ]
//{
//	for (int i = 0; i < len - 1; i++)
//	{
//		for (int j = 0; j < len - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//}

// 封装结束
int main56()
{
	int arr[10] = { 4,3,6,9,1,2,10,8,7,5 };
	int len = sizeof(arr) / sizeof(arr[0]);
	bubbleSort(arr, len);
	cout << "排序后的数组为：";
	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << "  ";
	}
	system("pause");
	return 0;
}