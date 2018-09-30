//square.c
//Calculate square of first n numbers
//9/24/18
//Programmer: Prem Agarwal
#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
    //define variables
    int sqr, limit;
    int num1 = 1;
    //read number terms
    printf("Enter number of terms: ");
    scanf("%d", &limit);
    //Calculate square
    printf("Number    Square of the number\n");
    while (num1 <= limit)
    {
        sqr = num1 * num1;
        printf("%d            %d\n",num1,sqr);
        num1 = num1 + 1;


    }
}

