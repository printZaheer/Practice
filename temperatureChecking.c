#include <stdio.h>

int main() {
    int temperature;
    printf("Enter Today's Temperature:\n");
    scanf("%d",&temperature);
    
    if (temperature>=35){
        printf("Today is Hot day.");
    }
    else if(temperature>=25){
       printf("Today is Pleasent Day.");
    }
    else 
    printf("Today is Cool Day.");

    return 0;
}