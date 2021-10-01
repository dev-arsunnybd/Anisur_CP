#include <stdio.h>

int main ()
{
    char lower;

    printf("Enter any lowercase: ");
    scanf("%C", &lower);
    printf("The uppercase is: %c",lower-32);


    return 0;
    
}