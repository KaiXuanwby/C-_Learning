//二维数组就是在一维数组上多增加一个维度

//定义方式：
//数据类型  数组名 [ 行数 ][ 列数 ] ;
//todo 数据类型  数组名 [ 行数 ][ 列数 ] = {{数据1，数据2},{数据3，数据4},......};    更加直观，提高代码的可读性
//数据类型  数组名 [ 行数 ][ 列数 ] = {数据1，数据2，数据3，数据4，.....};
//数据类型  数组名 [         ][ 列数 ] = {数据1，数据2，数据3，数据4，.....};

#include<iostream>
using namespace std;

int main40()     //  todo ctrl +k +c一键注释    ctrl + k + u 一键去除注释
{
	//int arr[2][3];
	//arr[0][0] = 1;
	//arr[0][1] = 2;
	//arr[1][2] = 6;
	//cout << arr[0][0] << endl;
	//cout << arr[0][1] << endl;
	//cout << arr[1][2] << endl;
	//// 嵌套循环：外层循环打印行数，内层循环打印列数
	//for (int i = 0; i < 2; i++)
	//{
	//	for (int j = 0; j < 3; j++)
	//	{
	//		cout << arr[i][j] << endl;
	//	}
	//}
	int arr2[2][3] =
	{
		{1,2,3},
		{4,5,6}
	};
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << arr2[i][j] << "  ";
		}
		cout << endl;
	}

	int arr3[2][3] = { 1,2,3,4,5,6 };
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << arr2[i][j] << "  ";
		}
		cout << endl;
	}

	int arr4[][3] = { 1,2,3,4,5,6 };
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << arr4[i][j] << "  ";
		}
		cout << endl;
	}
	system("pause");
	return 0;
}