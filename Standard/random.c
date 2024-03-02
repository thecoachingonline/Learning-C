#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <time.h>

// choose a winner from 1 to 10,000
void main(){
    uint32_t winner;
    srand(time(0));
    while(getchar()!='x'){
        winner = rand()%10000+1;
        printf("And the winner is #%i\n",winner);
    }
}