#include <stdio.h>
#include <stdlib.h>

void quicksort(int array[], int left, int right)
{
	int i = left, j = right;
	int pivot = array[(i+j)/2];
	int aux;

	while(i <= j)
	{
		while(array[i] < pivot)
		{
			i++;
		}

		while(array[j] > pivot)
		{
			j--;
		}

		if(i <= j)
		{
			aux = array[i];
			array[i] = array[j];
			array[j] = aux;
			i++;
			j--;	
		}
	}
	if(i < right)
		quicksort(array, i, right);
	if(j > left)
		quicksort(array, left, j);
}

int main()
{
	printf("Please enter the number of elements in the array: \n");
	int n;
	scanf("%i", &n);
	printf("Please enter the elements of the array: \n");
	int array[n];

	for (int i = 0; i < n; i++)
	{
		scanf("%i", &array[i]);
	}
	quicksort(array, 0, n-1);

	printf("The array is: \n");
	for (int i = 0; i < n; i++)
	{
		printf("%i ", array[i]);
	}

	printf("\n");

	return 0;
}