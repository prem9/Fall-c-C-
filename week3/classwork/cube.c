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
    int cube, limit;
    int num1 = 1;
    //read number terms
    printf("Enter number of terms: ");
    scanf("%d", &limit);
    //Calculate cube
    printf("Number    Cube of the number\n");
    while (num1 <= limit)
    {
        cube = pow(num1,3);
        printf("%d            %d\n",num1,cube);
        num1 = num1 + 1;

    }

}

