//20. Write a program to print elements present in even indices. 


#include<stdio.h>
void main(){
    int arr[6]={1,2,3,4,5,6};

    for(int i=0;i<=6;i+=2){
        printf("%d ",arr[i]);
    }
}