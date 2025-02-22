#include "matrix.h"
#include <stdio.h>

int main(int argc, char* argv[])
{
	float b[3][3] = {
        { 1.0f, -2.0f,  3.0f},
        { 5.0f, -3.0f,  0.0f},
        {-2.0f,  1.0f, -4.0f}
    };
	float a[3][3];
	float c[3][3];

    /*
    init_zero_matrix(b);
    b[1][1] =  8.0f;
    b[2][0] = -3.0f;
    b[2][2] =  5.0f;

    print_matrix(a);
    print_matrix(b);
    
    add_matrices(a, b, c);

    print_matrix(c);
    */

    printf("\n A egyseg matrix:\n");
    init_identity_matrix(a);
    print_matrix(a);


    printf("\n A egyseg matrix skalaris szorzata:\n");
    scalar_multiplication(4.0, a);
    print_matrix(a);

    printf("\n B matrix:\n");
    print_matrix(b);

    printf("\n A es B matrixok szorzata:\n");
    multiply_matrices(c, a, b);
    print_matrix(c);

    scale(c, 2.0, 3.0);
    printf("\nModositott matrix(skalazas):\n");
    print_matrix(c);

    shift(c, 1.0, -1.0);
    printf("\nModositott matrix(shift):\n");
    print_matrix(c);

    rotate(c, 45);
    printf("\nModositott matrix(forgatas):\n");
    print_matrix(c);

    float point[3] = {1.0, 1.0, 1.0};
    transform_point(c, point);
    printf("\nTranszformalt pont: %.2f, %.2f\n", point[0], point[1]);

    return 0;
}

