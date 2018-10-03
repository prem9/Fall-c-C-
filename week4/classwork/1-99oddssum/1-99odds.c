//file name: 1-99odds.c
//Use a for loop and find sum of all odd numbers from 1 to 99
//Prem Agarwal
//10/2/18
#include <stdio.h>

int main(void)
{
    int sum = 0;
    for (int count = 1; count <= 99; count++) {
        if (count%2 != 0) {
            sum = count + sum;
        }

    }
    printf("The sum of the odd numbers 1-99 is \n%d", sum);
}
