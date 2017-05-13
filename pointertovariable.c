#include <stdio.h>

int power(int base, int n)
{
	int base1 = base;
	for (int i = 1; i < n; i++)
	{
		base = base * base1;
	}
	return base;
}

int main()
{
	printf("The power is :%d\n", power(2,3));
	return 0;
}