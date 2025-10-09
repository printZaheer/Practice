/* Write a program using do-while loop that keeps asking the user for numbers until the user enters 0, then prints the total sum.*/

#include <stdio.h>

int main()
{
    int num, sum = 0;
    do
    {
        printf("Enter num (0 to stop ):  ");
        scanf("%d", &num);
        sum += num;
    } while (num != 0);
    printf("sum  = %d\n", sum);
    return 0;
}