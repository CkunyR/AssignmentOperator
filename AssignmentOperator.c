#include <stdio.h>

int main()
{
	int a = 10;
	a = a + 2;
	a += 2;//复合赋值符

	a = a >> 1;
	a >>= 1;

	a = a & 1;
	a &= 1;


	return 0;
}