#include <stdio.h>

int main()
{
    int i, n;
    printf("Enter the number you want to start with: ");
    scanf("%d", &n);
    
    for(i=n; i>=1; i--){
        printf("%d ", i);
    }

    return 0;
}
