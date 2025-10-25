#include <stdio.h>
int main()
{
    for (int i = 1; i <= 3; ++i)
    {

        for (int j = 1; j <= 4; ++j)
        {
            for (int k = 1; k <= 4; ++k)

                printf("*");
            printf("\n");
        } // end inner for
        printf("\n");
    } // end outer for
    return 0;
}