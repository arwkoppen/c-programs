#include <stdio.h>

int main()
{
	int c, words = 0;
	while ((c = getchar()) != '0')
	{
		if ((c == '\n') || (c == ' '))
		{
			words++;
		}
	}
	printf("Number of words: %d\n", words);
	return 0;
}