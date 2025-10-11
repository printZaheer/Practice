#include <stdio.h>

int main()
{
    int power;  // 1 = poweer ON hai, 0 = Power OFF
    int AC = 0; // 0 = OFF, 1 = ON
    int temp;   // current temperature

        printf("\nEnter the electricity  (1 = 0n, 0 = off): ");
        scanf("%d", &power);

        printf("Temperature dalo (C): ");
        scanf("%d", &temp);

        if (power == 1 && temp > 25 && AC == 0)
        {
            AC = 1;
            printf("Temperature is so hot so Trun the AC ON .\n");
        }
        else if ((power == 0 || temp <= 25) && AC == 1)
        {
            AC = 0;
            printf("Temperature is cold  so Turn the AC OFF k.\n");
        }
        else
        {
            printf("Today's temperature is Normal so don't change the status  : %s\n", AC ? "ON" : "OFF");
        }
    

    return 0;
}
