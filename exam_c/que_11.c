//Write a C program to find given number is even or odd using conditional operator. 
#include<stdio.h>
void main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    (num % 2 == 0) ? printf("%d is even", num) :printf("%d is odd", num);


}