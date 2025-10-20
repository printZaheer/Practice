#include <stdio.h>

int main()
{
    for (int x = 10; x >= 1; x--) 
    {
        for (int z = 10; z > x; z--) 
        {
            printf(" ");
        }
        for (int y = 1; y <= x; y++) 
        {
            printf(" *");
        }
        printf("\n");
    }
    return 0;
}