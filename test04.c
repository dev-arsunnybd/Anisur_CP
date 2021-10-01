#include <stdio.h>

int main ()
{
    char upper;

    printf("Enter any uppercase: ");
    scanf("%c", &upper);
    printf("The lower case is: %c", upper+32);


    return 0;
    
}