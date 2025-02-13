#ifndef CUBOID_H
#define CUBOID_H

typedef struct Cuboid{
    double x;
    double y;
    double z;
} Cuboid;


void set_cuboid_data(Cuboid* cube, double x, double y, double z);


double calc_cuboid_area(const Cuboid* cube);

double calc_cuboid_surface(const Cuboid* cube);

double calc_cuboid_volume(const Cuboid* cube);

#endif