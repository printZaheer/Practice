#include <stdio.h>

int main()
{
    int num1, num2, num3;
    int first, second, third;

    printf("Enter the value of num1:\n");
    scanf("%d", &num1);
    printf("Enter the value of num2:\n");
    scanf("%d", &num2);
    printf("Enter the value of num3:\n");
    scanf("%d", &num3);
    if (num1 <= num2 && num1 <= num3)
    {
        first = num1;
        if (num2 <= num3)
        {
            second = num2;
            third = num3;
        }
        else
        {
            second = num3;
            third = num2;
        }
    }
    else if (num2 <= num1 && num2 <= num3)
    {
        first = num2;
        if (num1 <= num3)
        {
            second = num1;
            third = num3;
        }
        else
        {
            second = num3;
            third = num1;
        }
    }
    else
    {
        first = num3;
        if (num1 <= num2)
        {
            second = num1;
            third = num2;
        }
        else
        {
            second = num2;
            third = num1;
        }
    }
    printf("Sorted: %d, %d, %d\n", first, second, third);

    return 0;
}