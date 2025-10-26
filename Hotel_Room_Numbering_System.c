#include <stdio.h>
int main()
{
    for (int floor = 1; floor <= 3; floor++)
    {
        for (int room = 1; room <= 5; room++)
        {
            printf("Room %d%02d ", floor, room);
        }
        printf("\n");
    }
    return 0;
}