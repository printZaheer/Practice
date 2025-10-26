#include <stdio.h>
int main()
{
    for (int week = 1; week <= 4; week++)
    {
        printf("Week %d: ", week);
        int day = 1;
        while (day <= 7)
        {
            printf("Day %d ", day);
            day++;
        }
        printf("\n");
    }
    return 0;
}