#include <stdio.h>

int main()
{
	int a[6] = {1,2,3,-1,-2,-3};
	int nrpoz = 0;
	for (int i = 0; i < 6; i++)
	{
		if (a[i] < 0)
			continue;
		nrpoz++;
		
	}
	printf("Positive numbers are: %d\n", nrpoz);
	return 0;
}