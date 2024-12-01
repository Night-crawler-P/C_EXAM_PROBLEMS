//22. Write a C program to print sum of all elements of an integer array. 

#include<stdio.h>
void main(){
    int n ;
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);
    int arr[n];
    
    for(int i=1;i<=n;i++){
        printf("Enter element %d: ",i);
        scanf("%d",&arr[i-1]);
    }
    int sum = 0;
    for(int i=0;i<n;i++){
        sum = sum + arr[i];
        }
    printf("The sum of all elements is - %d",sum);

}