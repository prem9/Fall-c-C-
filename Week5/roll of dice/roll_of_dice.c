#include <stdio.h>

int genrandom1_6() {
    // (rand() % (max+1-min)) + 1
    return (rand() % (6+1-1)) + 1;

}



int main(void)
{
    char flag = 'Y';
    int dice1, dice2;
    float doubles_percentage, cnt = 0, round = 1;
    while (flag == 'Y') {
        dice1 = genrandom1_6();
        dice2 = genrandom1_6();
        printf("Round %.0f\n", round);
        if (dice1 == dice2) {

            printf("Doubles: %d\n", dice1);
            cnt += 1; // Count of Doubles

        }
        else {
             printf("The dice results are : %d, %d\n", dice1, dice2);

        }
            doubles_percentage = (cnt/round) * 100;
            round += 1; // increment round
            printf("Amount of doubles so far: %.0f \n", cnt);
            printf("Percentage for doubles by round:  %.2f\n", doubles_percentage);

        printf("Do you want to continue Y/N: ");
        scanf(" %c",&flag);
        printf("\n");
    }

}
