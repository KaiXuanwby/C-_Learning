// ָ��Ҳ���������ͣ�ҲҪռ���ڴ�ռ�
// 32λ����ϵͳ����4�ֽڣ�64λ����ϵͳ����8�ֽ�, ������ʲô��������
//  86��ʾ32λ  x64��ʾ64λ
#include<iostream>
using namespace std;

int main50()
{
	int a = 10;
	int * p = &a;
	cout << "sizeof(int *) = " << sizeof(int *) << endl;
	cout << "sizeof(int *) = " << sizeof(float *) << endl;
	cout << "sizeof(int *) = " << sizeof(double *) << endl;
	cout << "sizeof(int *) = " << sizeof(char *) << endl;
	cout << "sizeof(int *) = " << sizeof(p) << endl;
	system("pause");
	return 0;
}