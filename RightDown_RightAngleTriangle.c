#include <stdio.h>

#include <stdio.h>

int main()
{
    for (int x = 1; x <= 5; x++)
    {
        for (int z = 1; z < x; z++)
        {
            printf(" ");
        }
        for (int y = 5; y >= x; y--)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}