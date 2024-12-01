//24. Write a program to find maximum elements from a matrix. 


#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of rows and columns of the matrices: ");
    scanf("%d", &n);


    int mat[n][n];
    // Input for matrix 1
    printf("Enter elements of matrix 1:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("Enter element [%d][%d]: ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }
    
    
    

    int max = mat[0][0]; // initialize max with the first element

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (mat[i][j] > max) {
                max = mat[i][j];
            }
        }
    }

    printf("Maximum element in the matrix: %d\n", max);

    return 0;
}