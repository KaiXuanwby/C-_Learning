// ��һ�������м�¼����ֻС������أ��� int  arr[ 5 ] = { 300, 350, 200, 400, 250 }
//�ҳ�����ӡ���ص�С������

#include<iostream>
using namespace std;

int main37()
{
	int min,max;
	int arr[5] = { 300, 350, 200, 400, 250 };
	min = arr[0];
	max = arr[0];
	for (int i = 0; i < 5; i++)
	{
		if (min > arr[i]) 
		{
			min = arr[i];
		}

		if (max < arr[i])
		{
			max = arr[i];
		}
	}
	cout << "��С������Ϊ��" << min << endl;
	cout << "��������Ϊ��" << max << endl;

	system("pause");
	return 0;
}