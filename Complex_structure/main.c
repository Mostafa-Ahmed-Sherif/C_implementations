/*************************************************************
Author : Mostafa Ahmed Sherif
Code : Complex numbers structure implementation and testing
Date : 3 / 9 / 2024
*************************************************************/

#include <stdio.h>
#include "complex.h"

int main()
{
	COMPLEX arr[13];
	COMPLEX result;

	arr[0] = CreateComplex(2, -6);
	arr[1] = CreateComplex(0, 8);
	arr[2] = CreateComplex(12,0);
	arr[3] = CreateComplex(2, -8);
	arr[4] = CreateComplex(0, -6);
	arr[5] = CreateComplex(0, -8);
	arr[6] = CreateComplex(3, -9);
	arr[7] = CreateComplex(6, 0);
	arr[8] = CreateComplex(3, -1);
	arr[9] = CreateComplex(2, -3);
	arr[10] = CreateComplex(7, -1);
	arr[11] = CreateComplex(2, 2);
	arr[12] = CreateComplex(2, -2);

	printf ("\n-----------------------------\n" );
	printf ("Conjugate of the arr[0]: \n" );
	result = ConjugateComplex(arr);
	PrintComplex(&result);
	
	printf ("\n-----------------------------\n" );
	printf ("Conjugate of the arr[1]: \n" );
	result = ConjugateComplex(arr + 1);
	PrintComplex(&result);
	
	printf ("\n-----------------------------\n" );
	printf ("Conjugate of the arr[2]: \n" );
	result = ConjugateComplex(arr + 2);
	PrintComplex(&result);
	
	printf ("\n-----------------------------\n" );
	printf ("Add two Structures: \n" );
	result = AddComplex(&arr[3], arr + 4);
	PrintComplex(&result);

	printf ("\n-----------------------------\n" );
	printf ("Add two Structures: \n" );
	result = AddComplex(arr+5, arr+6);
	PrintComplex(&result);

	printf ("\n-----------------------------\n" );
	printf ("Subtract two Structures: \n" );
	result = SubtractComplex(arr+7, arr+8);
	PrintComplex(&result);

	printf ("\n-----------------------------\n" );
	printf ("Multiply two Structures: \n" );
	result = MultiplyComplex(arr+9, arr+10);
	PrintComplex(&result);

	printf ("\n-----------------------------\n" );
	printf ("Divide two Structures: \n" );
	result = DivideComplex(arr+11, arr+12);
	PrintComplex(&result);

    return 0;
}
