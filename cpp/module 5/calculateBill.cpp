//calculateBill.cpp
//Calculate total amount with x
//Prem Agarwal
//12/7/18


#include <iostream>
#include <iomanip>
using namespace std;

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
    cout << fixed;
    cout << setprecision(2);

    cout << "Your order of 3 hamburgers, 1 milk shake and 2 hot dogs, with tax of 10% = $" << calculateBill(3, 1, 2) << endl ;
    cout << "Your order of 8 hamburger, 8 milk shakes and 8 hot dogs, with tax of 10% =  $" << calculateBill(8, 8, 8) << endl ;

    cout << "\nHow many hamburgers would you like:  ";
    cin >> hamburger ; // Read value similar to scanf in c
    cout << "\nHow many hot dogs would you like:  ";
    cin >> hotdog ;
    cout << "\nHow many milkshakes would you like:  ";
    cin >> milkshake ;
    cout << "\nYour order of " <<hamburger<<" hamburgers, "<<milkshake<<" milk shakes and "<<hotdog<< " hot dogs, with tax of 10% =  $" << calculateBill(hamburger,milkshake,hotdog) << endl ;

    /*scanf("%d", &hamburger);
    printf("\nHow many hotdogs would you like:  ");
    scanf("%d", &hotdog);
    printf("HOw many milkshakes would you like:  ");
    scanf("%d", &milkshake);
    printf("Your order multiplied with tax of 10 percent comes to total bill is $%.2f\n", calculateBill(hamburger, milkshake, hotdog)  );
*/
}
