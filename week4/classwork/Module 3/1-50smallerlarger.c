#include <stdio.h>
int main(void) {

    int temp,i,small_guess, large_guess;
    int add_greater_than_sg = 0, add_smaller_than_lg = 0;

    printf("Guess a number between 1 and 50 : ");
    scanf("%d", &small_guess);
    printf("Guess different than above number between 1 and 50 : ");
    scanf("%d", &large_guess);
    //swap if small guess is larger
    if (small_guess > large_guess){
        temp = large_guess;
        large_guess = small_guess;
        small_guess = temp;
    }
    for (i = 1; i <=50; i++){

        if (i >= small_guess) {
            add_greater_than_sg += i;

        }
        if (i <= large_guess){

            add_smaller_than_lg += i;
        }

    }
printf("Sum of numbers greater than equal to smaller guess = %d \n", add_greater_than_sg);
printf("Sum of numbers less than equal to larger guess = %d ", add_smaller_than_lg);

return 0;
}
