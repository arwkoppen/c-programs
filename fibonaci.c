#include <stdio.h>


int fibonaci(int n)
{
	int a = 0;
	int b = 1;
	int aux;
	for(int i = 1; i <= n; i++)
	{
		aux = a;
		a = b;
		b = aux + b;
	}
	return b;
}
int main()
{
	printf("%d\n", fibonaci(2));
	return 0;
}