#include <stdio.h>

int main() {
float marks;

    printf("Enter your marks:\n");
    scanf("%f",&marks);
    
    if(marks>=95.5)
    {
        printf("Grade A+\n");
    }
      else if (marks>=90.0)
    {
        printf("Grade A\n.");
    }
      else if (marks>=85.5)
    {
        printf("Grade B+\n.");
    }
          else if (marks>=80.0)
    {
        printf("Grade B\n.");
    }
          else if (marks>=75.5)
    {
        printf("Grade C+\n.");
    }
          else if (marks>=70.0)
    {
        printf("Grade C\n.");
    }
          else if (marks>=65.5)
    {
        printf("Grade D+\n.");
    }
          else if (marks>=60.0)
    {
        printf("Grade D\n.");
    }
    else
    {
        printf("SORRY! YOU ARE FAIL.");
    }

    return 0;
}