#include <stdio.h>

int main()
{
    int marks[3][3];
    int sum[3] = {0};

    printf("Enter marks of 3 students (Also  have 3 subjects):\n");

    for (int i = 0; i < 3; i++)
    {
        printf("\n Student %d:\n", i + 1);

        for (int j = 0; j < 3; j++)
        {
            printf("Enter subject %d: ", j + 1);
            scanf("%d", &marks[i][j]);
            sum[i] += marks[i][j];
        }
    }

    printf("\nTotal Marks of each student:\n");
    for (int i = 0; i < 3; i++)
    {
        printf("Student %d Total = %d\n", i + 1, sum[i]);
    }

    return 0;
}