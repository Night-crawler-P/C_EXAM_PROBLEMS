/*
18. Write a program to print following pattern:  
A 
B C 
D E F
*/

#include<stdio.h>
void main(){
int i,j,n,count;
count=65;
    printf("How many rows you want - ");
    scanf("%d",&n);
    for (i=1;i<=n;i++){
        for (j=1;j<=i;j++){
            printf("%c  ",count);
            count++;
    }
    printf("\n");
}
}
