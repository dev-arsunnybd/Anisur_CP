#include <stdio.h>

int main ()
{
    float f, c;

    printf("Enter farenhard : ");
    scanf("%f", &f);

    c = 0.8 * (f -32);
    printf("centrigrade : %.2f", c);
     
    return 0;

}