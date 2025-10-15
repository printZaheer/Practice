#include <stdio.h>

int main()
{
    int num, flag = 1;
    printf("enter the num:");
    scanf("%d", &num);

    do
    {

        printf("%d\n", num);

        printf("enter the num:");
        scanf("%d", &num);
        if (num == 0)
        {
            flag = 0;
            num++;
        }
    } while (num <= 10 && flag);

    return 0;
}