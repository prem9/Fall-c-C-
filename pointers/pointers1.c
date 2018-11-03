//pointer1.c
//Prem Agarwal
//converts pointers into different print statements
//11/2/18
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m = 29;
    int *ab ;
    ab = &m; //set ab to the address of m

    printf("The value of pointer ab is %p"
           "\nThe content of pointer ab is %d\n", ab,*ab);

    m = 34;
    printf("The value of pointer ab is %p"
           "\nThe content of pointer ab is %d\n", ab,*ab);

    m = 7;
    printf("The value of pointer ab is %p"
           "\nThe content of pointer ab is %d", ab,*ab);

    return 0;
}
