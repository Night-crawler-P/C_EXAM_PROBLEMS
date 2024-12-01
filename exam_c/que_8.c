//Write a C program to make a calculator using switch statement.

#include<stdio.h>


int main(){
    char op;
    float num1, num2, result;
    printf("Enter The Operator (+, -, *, /): ");
    scanf(" %c", &op);
    printf("ENTER FIRST VALUE - ");
    scanf("%f",&num1);
    printf("ENTER SECOND VALUE - ");
    scanf("%f",&num2);

    switch(op){
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;        
        case '/':
            if (num2==0){
                printf("Error! Division by zero is not allowed.");
                return 1;
            }
            else{
            result = num1 / num2;
            break;
            }
        default:
            printf("Invalid operator! Please enter the correct operator.");
            return 1;
    }
    printf("The result of %.2f %c %.2f = %.2f",num1,op,num2,result);
    return 0;
}
    





