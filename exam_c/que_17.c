/*
 Write a program to print following pattern: 
1 
2 3 
3 4 6 
*/

#include<stdio.h>
void main(){
int i,j,n,count;
count=1;
    printf("How many rows you want - ");
    scanf("%d",&n);
    for (i=1;i<=n;i++){
        for (j=1;j<=i;j++){
            printf("%d  ",count);
            count++;
    }
    printf("\n");
}
}

