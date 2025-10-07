#include <stdio.h>

int main()
{
    int i, num1, num2, product=0;
    
    printf("Enter first number: ");
    scanf("\n%d", &num1);
    printf("Enter second number: ");
    scanf("\n%d", &num2);
    
    for(i=1; i<=num2; i++){
        product = product + num1;
    }
    
    
    int divide=num1;
    int quotient=0;
    while(divide<=num1 && divide>0){
        divide = divide - num2;
        quotient++;
    }
    
    printf("\nMultiplication result: %d", product);
    printf("\nDivision result: %d", quotient);

    return 0;
}
