#include <stdio.h>
#include <stdlib.h>

char *str;

void main(){
    str=malloc(100);
    scanf("%[^\n]s",str);
    printf("\n%s\n",str);
    free(str);
}