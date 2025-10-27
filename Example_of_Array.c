#include <stdio.h> 
int main() { 
    int marks[10];
     int sum = 0; 
     float average;
      printf("Enter marks of 10 students:\n");
       for (int i = 0; i < 10; i++)
        {
             printf("Enter mark %d: ", i + 1); 
             scanf("%d", &marks[i]);
              sum =sum + marks[i]; 
            }
             average = sum / 10.0; 
             printf("\nTotal Marks = %d\n", sum);
              printf("Average Marks = %.2f\n", average);

               return 0;
             }