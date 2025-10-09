/* Write a program using while loop to calculate and print the sum of digits of a given number.
Example: Input 1234 → Output 10 */

#include <stdio.h>

int main()
{
    int digits, sum = 0, remainder;
    printf("Enter the digits :  ");
    scanf("%d", &digits);

    while (digits != 0)
    {
        remainder = digits % 10;
        sum = sum + remainder;
        digits = digits / 10;
    }
    printf("sum of digits = %d\n", sum);
    return 0;
}