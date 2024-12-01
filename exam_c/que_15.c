/*
    Write a program to print following pattern: 
    * 
    * * 
    * * *
*/
#include<stdio.h>
void main(){
    int i,j,n;
    printf("Enter how many rows of pattern you want - ");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            printf("* ");
        }
        printf("\n") ;  
    } 
    


}