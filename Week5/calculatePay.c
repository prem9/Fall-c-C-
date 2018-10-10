//calculatePay.c
//Write a C program to compute a worker’s pay, based on a rate per hour and number of hours worked.
//Prem Agarwal
//10/5/18
#include <stdio.h>

float calculateBill(float payRate, float hours)
{
    float totalPay;
    if (hours > 60)
    {
        totalPay = (payRate * 40) + (payRate * 20 * 1.5) + (payRate *(hours - 60) * 2);

    }
    else if (hours > 40)
    {
        totalPay = (payRate * 40) + (payRate *(hours - 40) * 1.5);

    }
    else
    {
        totalPay = (payRate * hours);
    }
    return totalPay;
}



void main()
{
    printf("Total  Pay for the rate of $30 per hour for 20 hours is $ %.2f\n",  calculateBill(30,20) );
    printf("Total  Pay for the rate of $15.50 per hour for 50 hours is $ %.2f\n", calculateBill(15.50,50)  );
    printf("Total  Pay for the rate of $11 per hour for 70.25 hours is $ %.2f", calculateBill(11.0,70.25)  );
}
