//pointer2.c
//Prem Agarwal
//converts pointers into different print statements
//11/2/18
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m = 300;
    float fx = 300.600006;
    char cht = 'z';

    printf("Using & operator: \n");
    printf("-----------------------------------------------------\n");

    printf("Address of m is %p  ", &m);

    printf("\nAddress of fx is %p", &fx);

    printf("\nAddress of cht is %p ", &cht);


    printf("\n\nUsing & and * operator: \n");
    printf("-----------------------------------------------------\n");

    printf("value at m is %d  ", *&m);

    printf("\nvalue at fx is %f", *&fx);

    printf("\nvalue at cht is %c ", *&cht);



    printf("\n\nUsing only pointer variable : \n");
    printf("-----------------------------------------------------\n");

    int *mPtr = &m;
    float *fxPtr;
    fxPtr = &fx;
    char *chtPtr;
    chtPtr = &cht;
    printf("Address of m is %p  ", mPtr);

    printf("\nAddress of fx is %p", fxPtr);

    printf("\nAddress of cht is %p ", chtPtr);




    printf("\n\nUsing only pointer operator : \n");
    printf("-----------------------------------------------------\n");

    printf("value at m is %d  ", *mPtr);

    printf("\nvalue at fx is %f", *fxPtr);

    printf("\nvalue at cht is %c ", *chtPtr);
    return 0;
}
