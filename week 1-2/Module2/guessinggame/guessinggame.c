//guessinggame.c
//to create a code that involves the person to guess a number from 1-25 and the code tells you whether you got it
//exact, less, and greater than the random answer
//Prem Agarwal
//10/5/18

#include <stdio.h>


int main(void)
{
    int guess, answer;
    printf("what is your guess between 1-25\n");
    scanf("%d", &guess);
    //(rand() % (max+1-min)) + min
    answer = (rand() % (25+1-1)) + 1;
    if (answer > guess) {
        printf("The answer was  %d and your guess was lesser than the answer", answer);

    }
    else if (answer < guess) {
        printf("The answer was  %d and you guess was greater than the answer", answer);

    }
    else {
        printf("Your guess was the same as the answer");
    }
}
