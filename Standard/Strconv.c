#include <stdio.h>
#include <stdlib.h>

void main(){
    //Part 1: atoi
    char str1[10]="572";
    int x=atoi(str1);
    printf("x=%d\n",x);

    //Part 2: strtol
    char str2[10]=" 123 3A ";
    char *end=str2;
    long num;
    num = strtol(str2,&end,10);
    printf("The first number is %li\n",num);
    num = strtol(end,&end,16);
    printf("The second number is %li in decimal, and %lX in hexadecimal\n",num,num);

    //Part 3: sscanf
    int a,b;
    sscanf(ste2,"%i %x",&a,&b);
    printf("The first number is %li\n",a);
    printf("The second number is %li in decimal, and %lX in hexadecimal\n",b,b);
}