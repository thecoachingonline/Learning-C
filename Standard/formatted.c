#include <stdio.h>

void main(){
    int i;
    char c;
    float f;
    double d;
    char str[30];

    scanf("%i %c %f %lf %[^\n]s"&i,&c,&f,&d,str);
    printf("Integer: %i\nCharter: %c\nFloat: %f\nDouble: %lf\nSteing: %s",i,c,f,d,str);
}