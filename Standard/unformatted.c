#include <stdio.h>

void main(){
    char c;
    char str[20];
    c=getchar();
    putchar(c);
    getchar();
    putchar('\n');
    fgets(str,20,stdin);
    puts(str);
}