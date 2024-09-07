#include <stdio.h>
#include "complex.h"

COMPLEX CreateComplex(double real, double imaginary)
{
    return (COMPLEX){real, imaginary};
}

void DestroyComplex(CPTR complex)
{
	complex->real = 0;
    complex->imaginary = 0;
}

COMPLEX AddComplex(CPTR first, CPTR second)
{
    COMPLEX cmp = {first->real + second->real, first->imaginary + second->imaginary};
    return cmp;
}

COMPLEX SubtractComplex(CPTR first, CPTR second)
{
    COMPLEX cmp = {first->real - second->real, first->imaginary - second->imaginary};
    return cmp;
}

COMPLEX MultiplyComplex(CPTR first, CPTR second)
{
    double real = first->real * second->real - first->imaginary * second->imaginary;
    double imaginary = first->real * second->imaginary + first->imaginary * second->real;

    COMPLEX cmp = {real, imaginary};
    return cmp;
}

COMPLEX ConjugateComplex(CPTR complex)
{
	COMPLEX cmp = {complex->real, 0-(complex->imaginary)};
    return cmp;
}

COMPLEX DivideComplex(CPTR first, CPTR second)
{
    COMPLEX cmp0 = ConjugateComplex(second);
    COMPLEX cmp1 = MultiplyComplex(first, &cmp0);
    double divisor = (second->real) * (second->real) + (second->imaginary) * (second->imaginary);

    COMPLEX cmp2 = {cmp1.real/divisor, cmp1.imaginary/divisor};
    return cmp2;
}

void PrintComplex(CPTR complex)
{
    printf("Real = %.3lf\tImaginary = %.3lf", complex->real, complex->imaginary);
}