// ����һ��5Ԫ�ص����飬���ҽ�Ԫ�����ã�
// ��ԭ����Ԫ��Ϊ��1��3��2��5��4�����ú�������Ϊ4��5��2��3��1
#include<iostream>
using namespace std;

int main38()
{
	int t;
	int arr[8] = { 1,3,2,5,4,9,4,8 };
	cout << _countof(arr) << endl;
	cout << "����֮ǰ��";
	for (int j = 0; j < _countof(arr); j++)
	{
		cout << arr[j] << "  ";
	}
	cout << endl;
	for (int i = 0; i < _countof(arr); i++)    //�˴�Ҳ����ʹ��while ��whike�����ڲ�֪��ѭ�����ٴε����
	{
		if (i >= _countof(arr) - 1 - i)
		{
			break;
		}
		t = arr[i];
		arr[i] = arr[_countof(arr) - 1 - i];   //Ҳ�ɶ���start ,end,ִ��++��--����
		arr[_countof(arr) - 1 - i] = t;
		
	}
	cout << "����֮��";
	for (int j = 0; j < _countof(arr); j++)
	{
		cout << arr[j] << "  ";
	}
	cout << endl;
	system("pause");
	return 0;
}