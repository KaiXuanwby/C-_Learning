// ������������ͬѧ�����������ģ����壩����һ�ο����еĳɼ��ֱ����±���ֱ����������ͬѧ���ܳɼ�
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
	string names[3] = { "����","����","����" };
	int sum = 0;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			
			sum += arr[i][j];
		}
		/*arr2[i] = sum;*/
		cout << "��" << i + 1 << "��Ԫ�صĺ�Ϊ" << sum << endl;
		cout << names[i] << "�ĳɼ�Ϊ" << sum << endl;
		sum = 0;
	}
	/*cout << "�����ĳɼ�Ϊ��" << arr2[0] << endl;
	cout << "���ĵĳɼ�Ϊ��" << arr2[1] << endl;
	cout << "����ĳɼ�Ϊ��" << arr2[2] << endl;*/
	system("pause");
	return 0;
}