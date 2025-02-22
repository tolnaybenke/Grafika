#include "matrix.h"

#include <stdio.h>
#include <math.h>


void init_zero_matrix(float matrix[3][3])
{
    int i;
    int j;

    for (i = 0; i < 3; ++i) {
        for (j = 0; j < 3; ++j) {
            matrix[i][j] = 0.0;
        }
    }
}

void print_matrix(const float matrix[3][3])
{
    int i;
    int j;

    for (i = 0; i < 3; ++i) {
        for (j = 0; j < 3; ++j) {
            printf("%4.4f ", matrix[i][j]);
        }
        printf("\n");
    }
}

void add_matrices(const float a[3][3], const float b[3][3], float c[3][3])
{
    int i;
    int j;

    for (i = 0; i < 3; ++i) {
        for (j = 0; j < 3; ++j) {
            c[i][j] = a[i][j] + b[i][j];
        }
    }
}

void init_identity_matrix(float matrix[3][3]){
    int i,j;

    for (i = 0; i < 3; ++i) {
        for (j = 0; j < 3; ++j) {
            if (i==j)
            {
                matrix[i][j] = 1.0;
            }else
            {
                matrix[i][j] = 0.0;
            } 
        }
    }
}

void scalar_multiplication(float scalar, float matrix[3][3]){
    int i,j;
    for (i = 0; i < 3; ++i) {
        for (j = 0; j < 3; ++j) {
            matrix[i][j] *= scalar;
        }
    }
}

void multiply_matrices(float result[3][3], float a[3][3], float b[3][3]) {
    double temp[3][3] = {0};
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 3; k++) {
                temp[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            result[i][j] = temp[i][j];
        }
    }
}

void transform_point(float matrix[3][3], float point[3]) {
    float result[3] = {0};
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            result[i] += matrix[i][j] * point[j];
        }
    }
    for (int i = 0; i < 3; i++) {
        point[i] = result[i];
    }
}

// Skálázás
void scale(float matrix[3][3], float sx, float sy) {
    matrix[0][0] *= sx;
    matrix[1][1] *= sy;
}

// Eltolás
void shift(float matrix[3][3], float tx, float ty) {
    matrix[0][2] += tx;
    matrix[1][2] += ty;
}

// Forgatás
void rotate(float matrix[3][3], float angle) {
    float radians = angle * M_PI / 180.0;
    float cosA = cos(radians);
    float sinA = sin(radians);
    float temp[3][3];
    init_identity_matrix(temp);
    temp[0][0] = cosA;
    temp[0][1] = -sinA;
    temp[1][0] = sinA;
    temp[1][1] = cosA;
    multiply_matrices(matrix, temp, matrix);
}


