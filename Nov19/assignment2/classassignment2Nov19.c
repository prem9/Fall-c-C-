#include <stdio.h>
#define SIZE 80
int main(void)
{
    char sentence[SIZE];

    puts("Enter a line of text: ");
    fgets(sentence, SIZE, stdin);
    reverse(sentence);
}

void reverse(const char * const sPtr)
{
    if ('\0' == sPtr[0]) {
        return;
    }
    else {
        reverse(&sPtr[1]);
        putchar(sPtr[0]);
    }
}
