#include <stdio.h>
#include <math.h>

float calculateBill(int hamburger, int milkshake, int hotdog)
{
    float result_multiply_tax, total_result;


    result_multiply_tax = (3 *hamburger +  3*milkshake + 2*hotdog) * 0.10;

    total_result = result_multiply_tax + (3*hamburger + 3*milkshake + 2*hotdog);
    //printf("result multiplied by %.2f\n", result_multiply_tax);
    //printf("total result is %.2f\n", total_result);
    return total_result;
}
int main(void)
{
    int hamburger, hotdog, milkshake;
    printf("Your order multiplied with tax of 10 percent comes to total bill is $%.2f\n", calculateBill(3, 1, 2)  );
    printf("Your order multiplied with tax of 10 percent comes to total bill is $%.2f\n", calculateBill(8, 8, 8)  );
    printf("How many hamburgers would you like:  ");
    scanf("%d", &hamburger);
    printf("\nHow many hotdogs would you like:  ");
    scanf("%d", &hotdog);
    printf("HOw many milkshakes would you like:  ");
    scanf("%d", &milkshake);
    printf("Your order multiplied with tax of 10 percent comes to total bill is $%.2f\n", calculateBill(hamburger, milkshake, hotdog)  );

}
