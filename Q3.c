#include <stdio.h>

int main()
{
    int i, a, firstDigit, lastDigit, sum;
    printf("Enter number: ");
    scanf("%d", &a);
    
    lastDigit = a % 10;
    
    for(i=a; i>=10; i=i/10){
        
    }
    firstDigit = i;
    
    sum = firstDigit + lastDigit;
    printf("\nThe sum of first and last digit is: %d", sum);
    
    return 0;
}
