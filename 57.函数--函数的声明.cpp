// ���ã����߱����������������Լ���ε��ú�����������ʵ��������Ե�������
//   �������������Զ�Σ����Ǻ����Ķ���ֻ����һ��
#include<iostream>
using namespace std;

//��ǰ���߱����������Ĵ��ڣ��������ú���������
int max(int a, int b);


int main47()
{
	int a = 10;
	int b = 5;
	int c = max(a, b);
	cout << "c = " << c << endl;
	system("pause");
	return 0;
}

int max(int a, int b)
{
	return a > b ? a : b;
}