#include <stdio.h>

int main()
{
	struct point 
	{
		int x,y;
	};
	struct point my_point;
	my_point.x = 3;
	my_point.y = 4;
	struct point another_point = {30, 40};
	printf("x: %d y: %d\n", my_point.x, my_point.y);
	printf("x: %d y: %d\n", another_point.x, another_point.y);

	return 0;
}