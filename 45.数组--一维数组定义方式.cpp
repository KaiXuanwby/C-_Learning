// 所谓数组，就是一个集合，里面存放了相同类型的数据元素
//数组中的每个数据元素都是相同的数据类型
//数组是由连续的内存位置组成的

//一维数组定义的三种方式
/*
数据类型  数组名 [ 数组长度 ]；
数据类型  数组名 [ 数组长度 ] = { 值1 ，值2,.....,}；
数据类型  数组名 [  ] = { 值1 ，值2,.....,}；
*/
// 与python中列表不同的是，数据类型必须相同，数组大小固定，一经声明不可更改
#include<iostream>
using namespace std;

int main35()
{
	int arr[5];
	//注意，数组元素是从0开始索引的
	arr[0] = 10;
	arr[1] = 10;
	arr[2] = 10;
	arr[3] = 10;
	arr[4] = 10;
	//访问数组元素
	cout << arr[0] << endl;
	cout << arr[1] << endl;
	cout << arr[2] << endl;
	cout << arr[3] << endl;
	cout << arr[4] << endl;

	int arr2[5] = { 10,20,30,40,50 };    //如果赋值没有全部赋完，剩下补0，超出报错
	cout << arr2[0] << endl;
	cout << arr2[1] << endl;
	cout << arr2[2] << endl;
	cout << arr2[3] << endl;
	cout << arr2[4] << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << arr2[i] << endl;
	}

	int arr3[] = { 90,80,70,60,50,40,30,20,10 };   //定义数组时，必须有初始长度
	for (int i = 0; i < 9; i++)
	{
		cout << arr3[i] << endl;
	}

	system("pause");
	return 0;
}