#include <stdio.h>

int main()
{
	int counter = 0;
	while (++counter < 10)
	{
		printf("Hello %d\n", counter);
	}
	return 0;
}