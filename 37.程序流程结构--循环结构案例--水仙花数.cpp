// ������ˮ�ɻ���, ʹ��do...while��䣬�������ˮ�ɻ���
// ˮ�ɻ�����ָһ����λ��������ÿһλ�ϵ����ֵ�3����֮�͵���������
#include<iostream>
using namespace std;

int  main27()
{
	int num = 100;
	int gnum, snum, bnum;
	do
	{
		gnum = num % 10;                      // a = num % 10;
		snum = ((num % 100) - gnum) / 10;     // b = num / 10 % 10;
		bnum = (num - gnum - snum) / 100;     // c = num / 100;
		if (gnum*gnum*gnum  + snum*snum*snum + bnum*bnum*bnum == num)
		{
			cout << num << "��ˮ�ɻ���" << endl;
		}
		num++;
	} while (num < 1000);
	system("pause");
	return 0;
}