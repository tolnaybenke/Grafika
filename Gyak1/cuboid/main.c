#include "cuboid.h"

#include <stdio.h>

int main(int argc, char* argv[])
{
	Cuboid cube;
	double area;
    double volume;
    double surface;
	
	set_cuboid_data(&cube, 10, 20, 4);
	area = calc_cuboid_area(&cube);
	
	printf("Cuboid area: %lf\n", area);
	
	return 0;
}
