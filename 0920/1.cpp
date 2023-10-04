#include<stdio.h>

int main() {    

    int number1, number2, result=0;
    char op;
    
    printf("Enter the first integer: \n");
    scanf("%d", &number1);
    printf("Enter the second integer: \n");
    scanf("%d", &number2);
   
    result= number1 + number2;   
 
    
    printf("\n The summation result = %d", result);
    return 0;
}

