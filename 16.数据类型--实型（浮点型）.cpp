//���ã����ڱ�ʾС��
//��Ϊ��float �����ȸ�����     double˫���ȸ�����
//float  ռ��4�ֽ��ڴ�ռ�     7λ��Ч����
//double ռ��8�ֽ��ڴ�ռ�    15-16λ��Ч����
#include<iostream>
using namespace std;

int main06()
{
	//Ĭ������£����һ��С��������ʾ��6λ��Ч����
	float f1 = 3.1415926f;     //�����дf��С����Ĭ��Ϊ˫���ȸ����ͣ�ǰ���float��Ҫ��һ��ת��������f��ʡȥ��ת�����̣�ֱ�ӵ�����
	cout << "f1 = " << f1 << endl;
	double d1 = 3.1415926;
	cout << "d1 = " << d1 << endl;

	//ͳ���ڴ�ռ�
	cout << "floatռ�ݵ��ڴ�ռ�Ϊ��" << sizeof(float) << endl;  //4
	cout << "doubleռ�ݵ��ڴ�ռ�Ϊ��" << sizeof(double) << endl; //8

	//��ѧ������
	float f2 = 3e2;    //���e��Ϊ�������������3*10^2
	cout << "f2 = " << f2 << endl;
	float f3 = 3e-2;     //���e��Ϊ����������Ҫ�����ţ���������ǣ�3*0.1^2
	cout << "f3 = " << f3 << endl;
	system("pause");
	return 0;

}