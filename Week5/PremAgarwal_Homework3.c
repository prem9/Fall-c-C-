//PremAgarwal_Homework.c
//Create a code that calculates the bill of 3 foods
//and calculates the total including tax
//Prem Agarwal
//10/5/18
#include <stdio.h>
#include <math.h>
int main(void)
{
    //creates variable and sets tax as 0.1
    int Hamburger, Hot_Dog, Milk_Shake;
    float tax;
    int result;
    float result_tax, total_result;
    tax = .1;

    //asks for input for three foods
    printf("How many Hamburgers would you like sir:  ");
    scanf("%d", &Hamburger);
    printf("\nHow many Hot dogs would you like sir:  ");
    scanf("%d", &Hot_Dog);
    printf("\nHow many milkshakes would you like sir:  ");
    scanf("%d", &Milk_Shake);
    //calculates total and with tax
    result = (Hamburger * 3) + (Hot_Dog *  2) + (Milk_Shake *3);
    result_tax = result * tax;
    total_result = result_tax + result;

    //prints results
    printf("%d hamburegers, %d hotdogs, and %d milkshakes\n", Hamburger, Hot_Dog, Milk_Shake);
    printf("$%d plus $%.2f tax\n", result, result_tax);
    printf("Your bill is: %.2f", total_result);
}
