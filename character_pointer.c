#include <stdio.h>

int main()
{
	char *my_pointer;
	char s[] = "Hello";
	my_pointer = &s;
	printf("%s\n", *my_pointer);
	return 0;
}