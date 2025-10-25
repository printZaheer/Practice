#include <stdio.h>
int main()
{
    int a = 10;
    float b = 20.5;
    char c = 'Z';
    printf(" Variable \t Value \t tAddress \n");
    printf(" - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n");
    printf("a\t\t%d\t\t%p\n", a, &a);
    printf("b\t\t %.2f\t\t%p\n", b, &b);
    printf("c\t\t%c\t\t%p\n", c, &c);
    return 0;
}