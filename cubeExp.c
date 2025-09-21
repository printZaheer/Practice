#include<stdio.h>

int main()
{
int a=10;
int b=5;
int result;
result=a*a*a-b*b*b-3*a*b*(a-b);

printf("a=10,    b=5\n");
printf ("result is =%d\n",result);
return 0;
}