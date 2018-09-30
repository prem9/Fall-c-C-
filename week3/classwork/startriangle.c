//startriangle.c
//Create a triangle of stars
//9/24/18
//Programmer: Prem Agarwal
#include <stdio.h>


void main(void)
{
    //define variables
    int i,j;
    for (i = 1; i <= 10; i++)
    {
        for (j=1; j<= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

}

