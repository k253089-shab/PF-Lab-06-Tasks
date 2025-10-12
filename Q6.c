#include <stdio.h>

int main()
{
    int i, num, lastDigit, sum=0;
    printf("Enter the number: ");
    scanf("%d", &num);
    
    for(i=num; i>0; i=i/10){
        lastDigit = i % 10;
        sum = sum + lastDigit;
    }
    
    printf("\nThe sum of individual digits is %d", sum);
    
    return 0;
}
