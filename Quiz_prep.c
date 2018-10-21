// File Name : quiz_prep.c
// Prem Agarwal 10/21/18
#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#define x 5+2
int main(void) {
    int main = 0;
    printf("main = %d\n",main);
    int a = 5, b= 10;
    int i = 0;
    a = a+b-(b=a);
    printf("\na=%d b=%d",a,b); //swaps a and b, parenthesis operates first

    if (i==0){
        i=((5,(i=3)),i=1);
        printf("\n%d\n",i); // prints 1, last assignment
    }
    else
        printf ("equal");

    i=0;
    for(;i<=2;)
        printf(" %d",++i);

    i=x*x*x;
    printf("\n%d",i);
    // 27

    a=10;{
    a+=5;
    int a=20;
    a+=10;
    printf("\n%d",a); // 30
    }
    printf("\n%d",a); // 15

    int price;
    price= (int) 68.549;
    printf("\n%d",price); // 68.000000
    bool b_string = ((5<3) || (8>5));
    if (b_string == true)
        printf("\ntrue");
    else
        printf("\nfalse");
    printf("\nThe path is D:\\sample\\test. ");// D:\sample\test

    int x1 =2, y=3;
    y*=3-(x1++)/3;
    printf("\nx = %d, y = %d \n",x1,y);
    int d = pow(5,2);
    printf ("\n 5 raise to power 2 = %d ", d);

    d = 6/3*2;
    printf("\n 6/3*2 = %d",d);
    {
        int i=2,j=3,k,l;
        float m,n;
        k = i/j*j;
        l=j/i*j;
        m=i/j*j;
        n = j/i*i;
        printf("\n%d,%d,%f,%f \n",k,l,m,n);
        int a,b;
        a = -3 - - 25;
        b = -3 - -(-3);
        printf("\n%d  %d\n", a, b);
    }



return 0;
}
