
#include <stdio.h>

int main() {
int age;

    printf("Enter your age:");
    scanf("%d",&age);
    
    if(age>=18)
    {
        printf("You are elligible to vote.");
    }
    else
    {
        printf("Sorry! you are elligible.");
    }

    return 0;
}