#ifndef CUBOID_H
#define CUBOID_H
#include <stdbool.h>

typedef struct Cuboid{
    double x;
    double y;
    double z;
} Cuboid;


void set_cuboid_data(Cuboid* cube, double x, double y, double z);

void set_size(Cuboid* cube, double x, double y, double z);

double calc_volume(const Cuboid *cube);

double calc_surface(const Cuboid *cube);

bool has_square_face(const Cuboid *cube);

#endif