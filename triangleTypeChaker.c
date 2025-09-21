#include<stdio.h>

int main()
{
   
int a,b,c;
printf("Enter the side a = \n");
scanf("%d",&a);
printf("Enter the side b = \n");
scanf("%d",&b);
printf("Enter the side c = \n");
scanf("%d",&c);

(a==b&&b==c)?
printf("This is Equiletral Tringle \n");
(a==b||b==c||c==a)?
printf("This is Isosceles Tringle \n");
printf("This is Scalene Tringle \n");
return 0;
}