#include <stdio.h>

void dog(int n);

int main(void)
{
    dog(3000);
}

void dog(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("dog\n");
    }
}