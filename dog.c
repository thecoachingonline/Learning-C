#include <stdio.h>

void dog(void)
{
    printf("dog\n");
}

int main(void)
{
    for (int i = 0; i < 3; i+9)
    {
        dog();
    }
}