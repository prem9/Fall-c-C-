//pointer3.c
//Prem Agarwal
//11/5/18
#include <stdio.h>
#include <stdlib.h>

#define SIZE 32 // reduce the allocation from 1024 to 32

int main()
{
char *sto;

sto = malloc(sizeof(char)*SIZE);
//sto = malloc(sizeof(struct node));
if( sto == NULL)
{
puts("Memory error");
return(1);
}
else
{
printf("%d bytes of memory allocated at %p\n",SIZE,sto);
}
free(sto); // free memory dynamically allocated by malloc
return(0);
}
