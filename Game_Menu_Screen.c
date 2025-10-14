#include <stdio.h>
int main()
{
    char exit_pressed = 'N';
    do
    {
  printf("Game Menu Screen\n");
  printf("\tPlay\n");
  printf("\tSettings\n");
  printf("\tExit\n");
  exit_pressed = 'Y';
 } while (exit_pressed != 'Y');
    return 0;
}