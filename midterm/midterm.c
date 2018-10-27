//midterm.c
//Write a program that counts change. The program should ask for the number of quarters, the number of dimes,
// the number of nickels and the number of pennies. The program should then compute
//the value of all the coins and tell the user how much money there is, expressed in dollars.
//also takes name and loops with saying a comment to save or that is a lot or to put cash back in
//Prem Agarwal
//10/23/18
#include <stdio.h>
#include <math.h>
int genrandom1_3() {// generate random number between 1 and 4
    // (rand() % (max+1-min)) + 1
    return (rand() % (4+1-1)) + 1;
}
float count_change(int quarter,int dime,int penny,int nickel) {//Calculate change
    float result;

        result = ((quarter * 25) + (dime *10) + (nickel * 5) + penny)/100.00;
        return result;
}

int main(void)
{

    int quarter, dime, penny, nickel, message;
    float result;
    char Name[50];


    while (1){
        message = genrandom1_3();
        printf("\nWhat is your name (Return/Enter to quit)?");

        int d = 0;
        d = fgetc(stdin);
        /*printf("d%d\n",d); */
        if (d  == 10 )
            {
                printf("\nBye\n");
                return 0; }
        else
            ungetc(d, stdin);

        scanf("%s", &Name);

        printf("\nHow many quarters are there ");
        scanf("%d", &quarter);
        printf("\n How many dimes are there ");
        scanf("%d", &dime);
        printf("\nHow many pennies are there ");
        scanf("%d", &penny);
        printf("\nHow many nickels are there ");
        scanf("%d", &nickel);
        result = count_change(quarter,dime, penny, nickel);
        printf("All counted, %s has: $%.2f\n",Name, result);
        if (message == 1){
            printf("Wow that is a lot of money");
        }
        else if (message == 2) {
            printf("Need to save more");
        }
        else {
            printf("Time to put cash into the bank");
        }
        fflush(stdin); // clearing up input stream - carriage return

    }
}
