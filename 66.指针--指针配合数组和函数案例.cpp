// ������������װһ��������ʵ�ֶ������������������
// �������� int arr[10] = {4,3,6,9,1,2,10,8,7,5}
#include<iostream>
#include"bubbleSort.h"
using namespace std;

// ð�ݷ�����
//void bubbleSort(int* arr, int len) //  int * arr Ҳ����дΪint arr[ ]
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

// ��װ����
int main56()
{
	int arr[10] = { 4,3,6,9,1,2,10,8,7,5 };
	int len = sizeof(arr) / sizeof(arr[0]);
	bubbleSort(arr, len);
	cout << "����������Ϊ��";
	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << "  ";
	}
	system("pause");
	return 0;
}