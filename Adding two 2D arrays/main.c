/*************************************************************
Author : Mostafa Ahmed Sherif
Code : Addition of two 2D arrays (matrices)
Date : 25 / 7 / 2023
*************************************************************/


#include <stdio.h>

#define ROWS 3
#define COLS 3


/* Function declaration to input, add and print matrix */
void matrixInput(int mat[][COLS]);
void matrixPrint(int mat[][COLS]);
void matrixAdd(int mat1[][COLS], int mat2[][COLS], int res[][COLS]);


int main()
{
    int mat1[ROWS][COLS], mat2[ROWS][COLS], res[ROWS][COLS];

    printf("\n-------------------------------------------------\n");

    // Input elements in first matrix
    printf("Enter elements in first matrix of size %dx%d: \n", ROWS, COLS);
    matrixInput(mat1);

    printf("\n-------------------------------------------------\n");

    // Input element in second matrix
    printf("\nEnter elements in second matrix of size %dx%d: \n", ROWS, COLS);
    matrixInput(mat2);

    printf("\n-------------------------------------------------\n");

    matrixAdd(mat1, mat2, res); //Adding mat1 and mat2 and storing into res

    printf("\nSum of first and second matrices: \n");
    matrixPrint(res);

    return 0;
}



void matrixInput(int mat[][COLS])
{
	for(int i=0;i<ROWS;i++)
    {
        for(int j=0;j<COLS;j++)
        {
            printf("Enter array element %d%d: ", i+1, j+1);
            scanf("%d", &mat[i][j]);
        }
    }
}




void matrixPrint(int mat[][COLS])
{
    for(int i=0;i<ROWS;i++)
    {
        for(int j=0;j<COLS;j++)
        {
            printf("%d\t", mat[i][j]);
        }

        printf("\n");
    }
}


void matrixAdd(int mat1[][COLS], int mat2[][COLS], int res[][COLS])
{
    for(int i=0;i<ROWS;i++)
    {
        for(int j=0;j<COLS;j++)
        {
            res[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
}
