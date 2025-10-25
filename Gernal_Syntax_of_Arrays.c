#include <stdio.h>
int main()
{

    int arr[5] = {10, 20, 30, 40, 50};
    printf(" ____________________________________________\n");
    printf(" Index \t Value \t         Address \n");
    printf(" ____________________________________________\n");
    for (int i = 0; i < 5; i++)
        printf("%d\t%d\t\t%p\n", i, arr[i], &arr[i]);
    return 0;
}