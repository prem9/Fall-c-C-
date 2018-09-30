//cube.c
//Calculate cube of first n numbers
//9/24/18
//Programmer: Prem Agarwal
#include <stdio.h>
#include <stdlib.h>
#include <math.h>


void main(void)
{
    //define variables
    int total, limit,times;
    int num1 = 0;
    int num2 = 1;
    times = 2;
    //read number terms
    printf("Enter number of terms: ");
    scanf("%d", &limit);
    //Calculate fib sequence
    printf("sequence\n");
    printf("%d", num1);
    while (times <= limit)
    {
        total = num1+num2;
        num2 = num1;
        num1 = total;
        printf(", %d",total);
        times = 1 +times;
    }

}

