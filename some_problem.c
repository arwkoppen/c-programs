#include <stdio.h>

void function(char *pointer)
{
	int i = 0;
	for (i = 0; *pointer != '\0'; pointer++)
	{
		i++;
	}
	printf("Nr of letters = %d\n", i);
}

int main()
{
	char s[] = "Hello";
	char *my_pointer;
	my_pointer = s;
	function(my_pointer);
	return 0;
}