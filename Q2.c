#include <stdio.h>

int main()
{
    int i, num1, num2, product=0;
    
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
    
    for(i=1; i<=num2; i++){
        product = product + num1;
    }
    
    if(num2 == 0){
        printf("\nError: Division by zero is not allowed.");
        return 0;
    }    
        
    int divide=num1;
    int quotient=0;
    
    while(divide>=num2){
        divide = divide - num2;
        quotient++;
    }
    
    int remainder = divide;
    
    printf("\nMultiplication result: %d", product);
    printf("\nDivision result:-\nQuotient: %d\nRemainder: %d", quotient, remainder);

    return 0;
}
