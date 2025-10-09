// Write a program using for loop to print even numbers between 1 and 20.
#include <stdio.h>

int main()
{
    for (int i = 1; i <= 20; i++)
    {
        if (i % 2 == 0)
            printf("%d\n", i);
    }

    return 0;
}