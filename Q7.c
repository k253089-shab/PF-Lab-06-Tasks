#include <stdio.h>

int main()
{
    int i, num, lastDigit;
    printf("enter number: ");
    scanf("%d", &num);
    
    for(i=num; i>0; i=i/10){ 
        lastDigit = i % 10; 
        printf("%d", lastDigit); 
    }
    
    return 0;
}
