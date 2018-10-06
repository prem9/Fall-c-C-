//howMuchMoney.c
//Write a program that counts change. The program should ask for the number of quarters, the number of dimes,
// the number of nickels and the number of pennies. The program should then compute
//the value of all the coins and tell the user how much money there is, expressed in dollars.
//Prem Agarwal
//10/5/18
#include <stdio.h>
#include <math.h>
void main(void)
{
    int quarter, dime, penny, nickel;
    float result;
    printf("How many quarters are there ");
    scanf("%d", &quarter);
    printf("\n How many dimes are there ");
    scanf("%d", &dime);
    printf("\nHow many pennies are there ");
    scanf("%d", &penny);
    printf("\nHow many nickels are there ");
    scanf("%d", &nickel);
    result = ((quarter * 25) + (dime *10) + (nickel * 5) + penny)/100.00;
    printf("Total amount is $%.2f", result);
}
