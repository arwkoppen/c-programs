#include <stdio.h>

int main()
{
	int *my_pointer;
	int x = 10, y = 20;
	my_pointer = &x;
	++*my_pointer;
	printf("%d\n", x);
	my_pointer = &y;
	*my_pointer = 40;
	printf("%d\n", y);
}