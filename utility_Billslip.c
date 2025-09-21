#include<stdio.h>
#include<conio.h>
#include<time.h>

int main(){

//1. Welcome Screen
printf("***************************************\n");
printf("WELCOME TO SMART UTILITY & SHOPPING HUB\n");
printf("***************************************\n");

//2.Display Current Date & Time

time_t tm;
time(&tm);
printf("Current Date/Time=%s",ctime(&tm));

//3.Grocery Store Bill
printf("\n----Grocery Section----\n");

int Rice_price = 300 ,Sugar_price = 200,Potatoes_price = 150, Apple_price = 400;
int qty_Rice ,qty_Sugar,qty_Potatoes,qty_Apple;

printf("Enter qty_Rice (kg) :\n ");
scanf("%d",&qty_Rice);

printf("Enter qty_Sugar (kg) :\n ");
scanf("%d",&qty_Sugar);
getchar();

printf("Enter qty_Potatoes (kg) :\n ");
scanf("%d",&qty_Potatoes);
getchar();

printf("Enter qty_Apple (kg) :\n ");
scanf("%d",&qty_Apple);

int total_Rice = Rice_price*qty_Rice;
int total_Sugar = Sugar_price*qty_Sugar;
int total_Potatoes = Potatoes_price*qty_Potatoes;
int total_Apple = Apple_price*qty_Apple;

int sub_total= total_Rice+total_Sugar+total_Potatoes+total_Apple;
printf("-----------------Grocery Shop------------------\n");

printf("Item        Quantity         Price/kg       Total_Price\n");

printf("Rice\t\t%d\t\t%d \t\t%d\n",
    qty_Rice,Rice_price,total_Rice);
printf("Sugar\t\t%d\t\t%d \t\t%d\n",
    qty_Sugar,Sugar_price,total_Sugar);
printf("Potatoes\t%d\t\t%d \t\t%d\n",qty_Potatoes,Potatoes_price,total_Potatoes);printf("Apple\t\t%d\t\t%d \t\t%d\n",
    qty_Apple,Apple_price,total_Apple);

printf("-------------Grocery Shop-------------\n");
printf("Grocery total : Rs %d\n", sub_total);
printf("-------------------------------------\n\n\n");


//Section B: Electricity Bill Calculator
printf("--------Electricity Section----------\n:");

int units ,bill;
int fixed_tax= 500;

printf("Enter number of consumed units:");
scanf("%d",& units);

if(units<=100){
   bill=units*10;
}
else if(units <=300){
    bill=units*20;
}
else {
    bill = (100*10)+(200*15)+(units-300)*20;
}

int total_bill=bill+fixed_tax;

printf("Total consumed units   : %d\n",units);
printf("Total Bill without Tax : %d\n",bill);
printf("Bill with Tax          : %d\n",total_bill);
printf("--------------------------------\n");
printf("Total Electricity_Bill : %d\n",total_bill);
printf("--------------------------------\n");


//Section C:Final Summary
int grocery_total = 2600;
int electricity_total = 2900;
int total_balance = 10000;

int total_expense =  grocery_total+electricity_total;
int remaining_balance = total_balance - total_expense;

int onethousand_notes = remaining_balance/1000;
int fivehundred_notes = (remaining_balance%1000)/500;
int threehundred_notes = (remaining_balance%1000)/300;
int hundred_notes = (remaining_balance%1000)/100;

printf("Total Expense      = %d\n",total_expense);
printf("Balance Paid       = %d\n",total_balance);
printf("Balance Returned   = %d\n",remaining_balance);
printf("Notes : \n1000  = %d\n500 = %d\n300 = %d\n100 = %d\n",
onethousand_notes,fivehundred_notes,threehundred_notes, hundred_notes);

printf("---------------------------------\n");

printf("     THANKS FOR USING GET HUB!");

    return 0;
}