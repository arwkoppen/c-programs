#include <stdio.h>

#define MAX 20

int length, first, last, middle;
int myArray[MAX];

int binary_search(int searched_number)
{
	while(first <= last)
	{
		if(myArray[middle] < searched_number)
		{
			first = middle + 1;
		}
		else 
		{
			if(myArray[middle] == searched_number)
			{
				return middle + 1;
			}
			else
			{
				last = middle -1;
			}
		}
		middle = (first + last)/2;
	}
	return 0;
}

int main()
{
	int searched_number;

	printf("How many numbers will you input\n");
	scanf("%d", &length);
	printf("Input %d numbers in order\n", length);
	for(int i = 0; i < length; i++)
	{
		scanf("%d", &myArray[i]);
	}
	printf("Input the number that has to be found\n");
	scanf("%d", &searched_number);

	first = 0;
	last = length - 1;
	middle = length/2; 
	printf("Number found at position %d\n", binary_search(searched_number));

	return 0;
}