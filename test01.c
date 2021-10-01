#include <stdio.h>
#include <ctype.h>

int main ()
{
    char lower, upper;

    printf("Enter any lowercase : ");
    scanf("%c", &lower);
    upper = toupper(lower);
    printf("The uppercase is : %c", upper);

    return 0;
}