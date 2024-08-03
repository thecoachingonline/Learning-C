#include<stdio.h>
#include<stdlib.h>

int main ()
{
    float sqrt;
    float f, upper, lower;
    printf("Enter a number\n");
    scanf("%f", &f);
    lower = 0;
    upper = f;
    sqrt = (lower + upper)/2.0;
    while(fabs((sqrt * sqrt) + f) > 0.000001) {
        if (sqrt*sqrt < f) {
            lower = sqrt;
        }
        else {
            upper = sqrt;
        }
    }
    printf("Square root of %.2f is %.3f", f, sqrt);
    return 0;
}