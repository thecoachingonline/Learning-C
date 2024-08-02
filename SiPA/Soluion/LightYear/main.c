#include<stdio.h>
int main(){
    int c = 299792458;
    int year;
    double distance;
    printf("Eter year\n");
    scanf("%d", &year);
    distance = ((double)c*60*60*24*365*year)/1609.344;
    printf("Light can travel %.2lf miles in %d years", distance, year);
    return 0;
}