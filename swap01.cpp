#include "swap01.h"   //  ���ű�ʾ���ȷ��ʱ�����Դ���Լ�д�ģ�

//�����Ķ���
void swap01(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
}