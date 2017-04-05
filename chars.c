#include <stdio.h>
#include <stdlib.h>

#define maxsize 100
int main(void)
{
	char line[maxsize];
	char c;
	int iterator = 0;

	while((c = getchar()) != '\n')
	{
		line[iterator++] = c;
	}
	iterator = 0;
	printf("The original string was: %s\n", line);

	while(line[iterator] != '\0')
	{
		if(line[iterator] == ' ' )
		{
			line[iterator] = '!';
		}
		iterator++;
	}
	printf("The replaced string is: %s\n", line);

	return 0;
}