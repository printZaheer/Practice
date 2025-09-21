#include <stdio.h>

int main() {
    int age;
    int salary;
    printf("Enter your Age:\n");
    scanf("%d",&age);
 printf("Enter your Salary:\n");
    scanf("%d",&salary);
    
    if(age>=25)
    {
        if(salary>=50000)
        {
            printf("YOU ARE ELLIGIBLE TO GET LOAN.");
        }
else {
    printf("YOUR SALARY IS NOT ENOUGH FOR LOAN APPROVAL.");
}
}
else
{
    printf("YOU ARE NOT ELLIGIBLE TO GET LOAN:");
}
    
    
    return 0;
}
