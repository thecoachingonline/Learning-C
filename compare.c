#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int x = get_int("What's X? ");
    int y = get_int("What's Y? ");

    if (x < y)
    {
        printf("x is less then y\n");
    }
}