//multiplicationtable.c
//Create a multiplication table
//9/24/18
//Programmer: Prem Agarwal
#include <stdio.h>


void main(void)
{
    //define variables
    int i,j;
    printf("Multiplication table\n");
    for (i = 1; i <= 10; i++)
    {
        for (j=1; j<= 10; j++)
        {
            printf("%d\t", i*j);
        }
        printf("\n");
    }

}

