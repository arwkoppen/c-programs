#include <stdio.h>

int main()
{
	int a = 10;
	int *my_pointer;
	*my_pointer = &a;
	int *another_pointer;
	another_pointer = my_pointer;

	printf("%d\n", my_pointer);
	printf("%d\n", *another_pointer);
	return 0;
}