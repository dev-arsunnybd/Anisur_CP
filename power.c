#include<stdio.h>
#include<math.h>


int main ()
{
    int x,y;

    printf("write two numbers to see the power of number: ");
    scanf("%d %d", &x, &y);


    double result = pow(x,y);
    printf("The power of number: %.2lf", result);


    return 0;


}