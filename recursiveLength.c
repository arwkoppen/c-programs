#include <stdio.h>

static int countz = 0;

int recursiveFunction(char *string, char c, int countz)
{
	if(*string)
	{
		if (*string == c)
		{
			return recursiveFunction(++string, c, ++countz);
		}	
		else
		{
			return recursiveFunction(++string, c, countz);
		}
	}
	return countz;
}

int count(char *string, char c)
{
	int number = recursiveFunction(string, c, countz);
	return number;
}

int main()
{
	char string[] = "Hello";
	char c = 'a';
	printf("The number of occurences of %c is %d\n", c, count(string, c));
	return 0;
}