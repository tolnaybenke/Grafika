#include "cuboid.h"

#include <stdio.h>

int main(int argc, char* argv[])
{
	Cuboid cube;
	double area;
    double volume;
    double surface;
	
	
	set_size(&cube, 5.0 ,5.0 ,7.0);
	
	printf("Terfogat: %.2f\n", calc_volume(&cube));
    printf("Felszin: %.2f\n", calc_surface(&cube));
    printf("Van negyzet alaku lap? %s\n", has_square_face(&cube) ? "Igen" : "Nem");
	
	return 0;
}
