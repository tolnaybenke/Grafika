#include "cuboid.h"
#include <stdio.h>
#include <math.h>
#include <stdbool.h>


void set_size(Cuboid *cube, double x, double y, double z) {
    if (x > 0 && y > 0 && z > 0) {
        cube->x = x;
        cube->y = y;
        cube->z = z;
    } else {
        printf("Hiba: Az élhosszaknak pozitívnak kell lenniük!\n");
    }
}

double calc_volume(const Cuboid *cube) {
    return cube->x * cube->y * cube->z;
}

// Felszín számítása
double calc_surface(const Cuboid *cube) {
    return 2 * (cube->x * cube->y + cube->y * cube->z + cube->x * cube->z);
}

// Négyzet alakú lap vizsgálata
bool has_square_face(const Cuboid *cube) {
    return (cube->x == cube->y || cube->y == cube->z || cube->x == cube->z);
}
