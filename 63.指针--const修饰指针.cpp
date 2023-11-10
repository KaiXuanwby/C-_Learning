// const修饰指针有三种情况：
// const 修饰指针：--常量指针  : 指针指向可以修改，但指针指向的值不可以修改（即不可以通过指针间接修改指向的内存空间的值）
// const 修饰常量：--指针常量  ：指针的指向不可以该，指针指向的值可以修改（即可以通过指针间接修改指向的内存空间的值）
// const即修饰指针，又修饰常量 : 指针的指向不可以该，指针指向的值也不可以修改
// 记忆时，const翻译为常量，*翻译为指针
#include<iostream>
using namespace std;

int main53()
{
	int a = 10;
	int b = 10;
	
	// 常量指针
	const int* p1 = &a;
	p1 = &b;
	//*p1 = 20;
	
	// 指针常量
	int* const p2 = &a;
	*p2 = 20;
	// p2 = &b;
	
	// 即修饰指针，又修饰常量
	const int* const p3 = &a;
	//*p3 = 20;
	// p3 = &b;

	system("pause");
	return 0;
}