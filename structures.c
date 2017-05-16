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

	struct rect {
		struct point p1;
		struct point p2;
	};

	struct rect screen;
	screen.p1.x = 20;
	screen.p1.y = 30;
	screen.p2.x = 50;
	screen.p2.y = 60;
	printf("x of p1: %d y of p1: %d ; x of p2: %d y of p2: %d\n", screen.p1.x, screen.p1.y, screen.p2.x, screen.p2.y);
	
	return 0;
}