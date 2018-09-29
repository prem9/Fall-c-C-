//file name: Softwaresales.c
//9/28/18
//What it does is that it checks the quantity of packages and tells you the discount price and total price of the packages
//Prem Agarwal
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void main(void)
{
    //defining variables
    float packageprice = 99.0;
    float discountamount;
    int quantity;

    //reading the quantity of packages
    printf("Enter the number of packages purchased: ");
    scanf("%d", &quantity);

    //Compute discount amount
    if (quantity >= 100)
    {
        discountamount = 99.0*quantity*0.4;
    }
    else if (quantity >= 50.0)
    {
        discountamount = 99.0*quantity*0.3;
    }
    else if (quantity >= 20.0)
    {
        discountamount = 99.0*quantity*0.2;
    }
    else if (quantity >= 10.0)
    {
        discountamount = 99.0*quantity*0.1;
    }
    else
    {
        discountamount = 0.0;
    }
    //print discount amount and total amount
    discountamount = roundf(discountamount*100)/100;
    printf("Discount amount = $ %.2f\n",discountamount);
    packageprice = roundf((quantity*99.0-discountamount)*100)/100;
    printf("Total amount = $ %.2f\n", packageprice);
}
