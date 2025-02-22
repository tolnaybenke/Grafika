
#ifndef MATRIX_H
#define M_PI 3.14159265358979323846
#define MATRIX_H

/**
 * Initializes all elements of the matrix to zero.
 */
void init_zero_matrix(float matrix[3][3]);

/**
 * Print the elements of the matrix.
 */
void print_matrix(const float matrix[3][3]);

/**
 * Add matrices.
 */
void add_matrices(const float a[3][3], const float b[3][3], float c[3][3]);

void init_identity_matrix(float matrix[3][3]);

void scalar_multiplication(float scalar, float matrix[3][3]);

void multiply_matrices(float result[3][3], float a[3][3], float b[3][3]);

void transform_point(float matrix[3][3], float point[3]);

void scale(float matrix[3][3], float sx, float sy);

void shift(float matrix[3][3], float tx, float ty);

void rotate(float matrix[3][3], float angle);

#endif // MATRIX_H



