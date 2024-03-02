#include <stdio.h>

void main(){
    int counter=0;
    FILE *f=fopen("names.txt", "r+");
    char c=getc(f);
    while(c!=EOF){
        putchar(c);
        c=getc(f);
        counter++;
    }
    fprintf(f,"\nI counted %d characters.\n",counter);
}