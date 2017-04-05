#include <stdio.h>

int gcd(int a, int b)
{
	int aux;
	while(b>0)
	{
		aux = a;
		a = b;
		b = aux % b;
	}
	return a;
}

int main()
{
	printf("Input two numbers:\n");
	int a, b;
	scanf("%d", &a);
	scanf("%d", &b);
	printf("The gcd of %d and %d is %d\n", a, b, gcd(a,b));
	return 0;
}