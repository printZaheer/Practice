#include <stdio.h>
int main()
{
int performed_sit_ups = 0;
int required_sit_ups = 10;

while (performed_sit_ups < required_sit_ups)
{
performed_sit_ups++;
printf("%d sit-ups done! ", performed_sit_ups);
printf("%2d to go...\n", required_sit_ups - performed_sit_ups);
}
printf("Punishment Served!\n");
return 0;
}