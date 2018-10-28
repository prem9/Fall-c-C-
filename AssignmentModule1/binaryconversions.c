#include <stdio.h>

// function to convert decimal to binary
void decimal_Binary(int n)
{
    // array to store binary number
    int static binary_num[1000];

    // counter for binary array
    int i = 0;
    while (n > 0) {

        // storing remainder in binary array
        binary_num[i] = n % 2;
        n = n / 2;
        i++;
    }

    // printing binary array in reverse order
    for (int bin = i - 1; bin >= 0; bin--)
        printf("%d",binary_num[bin]);

        }
// function to convert decimal to octal
void decimal_octal(int n)
{
    // array to store binary number
    int octal_num[1000];

    // counter for binary array
    int i = 0;
    while (n > 0) {

        // storing remainder in binary array
        octal_num[i] = n % 8;
        n = n / 8;
        i++;
    }

    // printing binary array in reverse order
    for (int oct = i - 1; oct >= 0; oct--)
        printf("%d", octal_num[oct]);
}
// function to convert decimal to hexadecimal
void decimal_Hexa(int n)
{
    // char array to store hexadecimal number
    char hexa_Num[100];

    // counter for hexadecimal number array
    int i = 0;
    while(n!=0)
    {
        // temporary variable to store remainder
        int temp  = 0;

        // storing remainder in temp variable.
        temp = n % 16;

        // check if temp < 10
        if(temp < 10)
        {
            hexa_Num[i] = temp + 48;
            i++;
        }
        else
        {
            hexa_Num[i] = temp + 55;
            i++;
        }

        n = n/16;
    }

    // printing hexadecimal number array in reverse order
    for(int j=i-1; j>=0; j--)
        printf("%c", hexa_Num[j]);
}
// Function to convert binary to decimal
int binary_Decimal(int n)
{
    int num = n;
    int dec_value = 0;

    // Initializing base value to 1, i.e 2^0
    int base = 1;

    int temp = num;
    while (temp)
    {
        int last_digit = temp % 10;
        temp = temp/10;

        dec_value += last_digit*base;

        base = base*2;
    }

    return dec_value;
}

// Driver program to test above function
int main()
{
    int bin_n[1000],n = 33;
    //printf("%d\n", binary_Decimal(n));
    //decimal_Hexa(n);
    printf("\n");
    decimal_Binary(n);

    //printf("\n");
    //decimal_octal(n);

    return 0;
}
