#include <stdio.h>
#include <ctype.h>

int main ()
{

    char lower, upper;


    printf("Enter any uppercase : ");
    scanf("%c", &upper);
    lower = tolower(upper);
    printf("The lowercase is : %C", lower);


    return 0;

}