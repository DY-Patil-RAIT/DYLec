#include <stdio.h>

#define SIZE 3

int main()
{
    int choice;
    int matrix1[SIZE][SIZE], matrix2[SIZE][SIZE], result[SIZE][SIZE];

    printf("Name: Asmit Balu Jogdand\nRoll No. 25CE1051\n");

    do {
        printf("\nSelect an operation:\n");
        printf("1. Addition of two 3x3 matrices\n");
        printf("2. Transpose of a 3x3 matrix\n");
        printf("3. Multiplication of two 3x3 matrices\n");
        printf("4. Exit\n");

        printf("Enter your choice (1-4): ");
        scanf("%d", &choice);

        switch(choice)
        {

        case 1:

            printf("Enter elements of matrix 1 (3x3):\n");
            for(int i = 0; i < SIZE; i++)
            {
                for(int j = 0; j < SIZE; j++)
                {
                    scanf("%d", &matrix1[i][j]);
                }
            }

            printf("Enter elements of matrix 2 (3x3):\n");
            for(int i = 0; i < SIZE; i++)
            {
                for(int j = 0; j < SIZE; j++)
                {
                    scanf("%d", &matrix2[i][j]);
                }
            }

            for(int i = 0; i < SIZE; i++)
            {
                for(int j = 0; j < SIZE; j++)
                {
                    result[i][j] = matrix1[i][j] + matrix2[i][j];
                }
            }

            printf("Result of matrix addition:\n");
            for(int i = 0; i < SIZE; i++)
            {
                for(int j = 0; j < SIZE; j++)
                {
                    printf("%d ", result[i][j]);
                }
                printf("\n");
            }

            break;

        case 2:

            printf("Enter elements of matrix (3x3):\n");
            for(int i = 0; i < SIZE; i++)
            {
                for(int j = 0; j < SIZE; j++)
                {
                    scanf("%d", &matrix1[i][j]);
                }
            }

            for(int i = 0; i < SIZE; i++)
            {
                for(int j = 0; j < SIZE; j++)
                {
                    result[j][i] = matrix1[i][j];
                }
            }

            printf("Transpose of the matrix:\n");
            for(int i = 0; i < SIZE; i++)
            {
                for(int j = 0; j < SIZE; j++)
                {
                    printf("%d ", result[i][j]);
                }
                printf("\n");
            }

            break;

        case 3:

            printf("Enter elements of matrix 1 (3x3):\n");
            for(int i = 0; i < SIZE; i++)
            {
                for(int j = 0; j < SIZE; j++)
                {
                    scanf("%d", &matrix1[i][j]);
                }
            }

            printf("Enter elements of matrix 2 (3x3):\n");
            for(int i = 0; i < SIZE; i++)
            {
                for(int j = 0; j < SIZE; j++)
                {
                    scanf("%d", &matrix2[i][j]);
                }
            }

            for(int i = 0; i < SIZE; i++)
            {
                for(int j = 0; j < SIZE; j++)
                {
                    result[i][j] = 0;

                    for(int k = 0; k < SIZE; k++)
                    {
                        result[i][j] += matrix1[i][k] * matrix2[k][j];
                    }
                }
            }

            printf("Result of matrix multiplication:\n");
            for(int i = 0; i < SIZE; i++)
            {
                for(int j = 0; j < SIZE; j++)
                {
                    printf("%d ", result[i][j]);
                }
                printf("\n");
            }

            break;

        case 4:
            printf("Exiting...\n");
            break;

        default:
            printf("Invalid choice, please try again.\n");

        }
    } while (choice != 4);

    return 0;
}
