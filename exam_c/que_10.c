/*Write a C program to for find given number is even or odd using goto statement.*/

#include <stdio.h>


void main()
{
    int num;
    printf("Enter a number - ");
    scanf("%d", &num);
    if (num % 2 == 0)
        goto even;
    else
        goto odd;
even:
    printf("%d is even\n", num);
    exit(0);
odd:
    printf("%d is odd\n", num);
}