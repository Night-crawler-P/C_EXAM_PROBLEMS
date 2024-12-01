//19. Write a C program to display numbers of an array at odd index only. 

#include<stdio.h>
void main(){
    int arr[6]={1,2,3,4,5,6};

    for(int i=1;i<=6;i+=2){
        printf("%d ",arr[i]);
    }
}