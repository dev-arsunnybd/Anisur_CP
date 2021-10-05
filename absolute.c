#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int result, a;
    
    printf("Enter an integer value: ");
    scanf("%d", &result);

    a = abs(result);

    printf("The absolute value is : %d", a);

    return 0;


}