//23. Write a C program to print odd numbers from an array. 

#include <stdio.h>

int main() {
    int n ;
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);
    int arr[n], i, count = 0;

    // Take input from user
    printf("Enter %d array elements: \n",n);
    for(i=0; i<n; i++){
        printf("Enter number on  %d th index -  ",i);
        scanf("%d", &arr[i]);
    }
    // Print odd numbers
    printf("Odd numbers from the array are: ");
    for(i=0; i<n; i++) {
        if(arr[i] % 2 != 0) {
            printf("%d ", arr[i]);
            count++;
        }
    }
    printf("\n");

    // Print count of odd numbers
    printf("Number of odd numbers: %d\n", count);

    return 0;
}