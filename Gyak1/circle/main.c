#include "circle.h"

#include <stdio.h>

int main(int argc, char* argv[])
{
	Circle circle;
	double area;
	
	set_circle_data(&circle, 10, 20, 4);
	area = calc_circle_area(&circle);
	
	printf("Circle area: %lf\n", area);
	
	return 0;
}
