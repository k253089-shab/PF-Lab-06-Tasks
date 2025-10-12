#include <stdio.h>

int main()
{
    int i, a, countEven=0, countOdd=0;
    
    for(i=1; i<=10; i++){
        printf("enter %dst number: ", i);
        scanf("%d", &a);
        if(a%2==0){
            countEven++;
        } else{
            countOdd++;
        }
    }
    
    printf("\nThere are %d even numbers and %d odd numbers", countEven, countOdd);
    
    return 0;
}
