// 案例：水仙花数, 使用do...while语句，求出所有水仙花数
// 水仙花数是指一个三位数，他的每一位上的数字的3次幂之和等于它本身
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
			cout << num << "是水仙花数" << endl;
		}
		num++;
	} while (num < 1000);
	system("pause");
	return 0;
}