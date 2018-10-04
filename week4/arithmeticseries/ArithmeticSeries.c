//ArithmeticSeries.c
//Write for statements that print the following sequences of values:
//a) 1, 3, 5, 7, 9, 11, 13
//b) 2, 5, 8, 11, 14, 17
//c) 30, 20, 10, 0, –10, –20, –30
//d) 15, 23, 31, 39, 47, 55
//10/03/18
//Programmer: Prem Agarwal
#include <stdio.h>

// Arithmetic Series Formula An = A1 + (n-1)*d
void main(void)
{
    //define variables
    int An,Al,d,n;
    d = 2;
    Al = 1;
    printf("%d", Al); // Print First term to take care of comma
    for (int n = 1; n <= 6; n++)
    {

        An = Al + n * d;

        printf(", %d",An);
    }


    Al = 2;
    d = 3;
    printf("\n%d", Al);
    for (int n = 1; n <= 5; n++)
    {

        An = Al + n * d;

        printf(", %d",An);
    }
    Al = 30;
    d = -10;
    printf("\n%d", Al);
    for (int n = 1; n <= 6; n++)
    {

        An = Al + n * d;

        printf(", %d",An);
    }

    Al = 15;
    d = 8;
    printf("\n%d", Al);
    for (int n = 1; n <= 5; n++)
    {

        An = Al + n * d;

        printf(", %d",An);
    }


}

