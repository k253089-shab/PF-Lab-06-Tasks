#include <stdio.h>

int main()
{
    int i, a;
    printf("Enter number: ");
    scanf("%d", &a);
    
    for(i=2; i<a; i++){
        if(a % i == 0){
            printf("\n%d is not a prime number", a);
            return 0;
        }
    }
    
    printf("\n%d is a prime number", a);
    
    return 0;
}
