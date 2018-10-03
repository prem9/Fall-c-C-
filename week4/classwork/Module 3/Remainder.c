//file name: Remainder.c
//For numbers of 1 to 20 try to find the module of 3 for any even number and module of 2 for any odd number
//Prem Agarwal
//10/2/18
#include <stdio.h>

int main(void)
{
    int result;
    for (int count = 1; count <= 20; count++) {
        if (count%2 != 0) {
            result = count%2;
            printf("%d/2 remainder is %d\n", count, result);
        }
        else {
            result = count%3;
            printf("%d/3 remainder is %d\n", count, result);
        }

    }
}
