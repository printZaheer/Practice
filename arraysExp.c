#include <stdio.h>

int main()
{
    int array[5];

    
    printf("Enter 5 numbers:\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &array[i]);
    }

    printf("Numbers are:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d\t", array[i]);
    }

    return 0;
}