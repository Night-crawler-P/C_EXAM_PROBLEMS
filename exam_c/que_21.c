//21. Write a program to find addition of two matrices. 

#include <stdio.h>



int main() {
    int n;
    printf("Enter the number of rows and columns of the matrices: ");
    scanf("%d", &n);


    int mat1[n][n], mat2[n][n], result[n][n];

    // Input for matrix 1
    printf("Enter elements of matrix 1:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("Enter element [%d][%d]: ", i, j);
            scanf("%d", &mat1[i][j]);
        }
    }

    // Input for matrix 2
    printf("Enter elements of matrix 2:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
             printf("Enter element [%d][%d]: ", i, j);
            scanf("%d", &mat2[i][j]);
        }
    }

    // Add matrices
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            result[i][j] = mat1[i][j] + mat2[i][j];
        }
    }

    // Print result
    printf("Resultant matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d   ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}