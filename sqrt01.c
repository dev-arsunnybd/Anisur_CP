#include <stdio.h>
#include <math.h>

int main ()
{
    int x;

    printf("Enter a value : ");
    scanf("%d", &x);

    double result = sqrt(x);

    printf("The squareroot is : %.2lf", result);

    return 0;


}