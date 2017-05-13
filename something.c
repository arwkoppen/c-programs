#include <stdio.h>

int main()
{
	char string[] = "Hello";
	char *my_pointer;
	my_pointer = string;
	printf("%c\n", my_pointer[1]);
	return 0;
}