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
    printf("\n1. Convert 55ef from base 16 to base 2 \n");
    char num[]="0x55ef";
    long n1 = strtol(num, NULL, 16);
    decimal_Binary(n1);

    printf("\n2. Convert c66 from hexadecimal to base 2 \n");
    char num1[]="0xc66";
    n1 = strtol(num1, NULL, 16);
    decimal_Binary(n1);

    printf("\n3.Convert 0100 0111 1011 0111 from base 2 to hexadecimal \n");
    //char num3[] = "10000";
    char num3[] = "0100011110110111";
    //char *ptr = num3;
    n1 = strtol(num3, NULL, 2);
    printf("  %04x\n", n1);
    printf("4. Convert 55 from base 8 to  binary\n");
    char num4[] = "055";
    n1 = strtol(num4, NULL, 8);
    decimal_Binary(n1);

    printf("\n5. Convert 101 000 000 from base 2 to base 8");
    char num5[] = "101000000";
    //printf("\nQ5. %s \n",num5);
    n1 = strtol(num5, NULL, 2);
    printf("\n  %04o", n1);
    printf("\n6. Convert 110 000 from base 2 to octal");
    char num6[] = "110000";
    //printf("\nQ6. %s \n",num6);
    n1 = strtol(num6, NULL, 2);
    printf("\n  %04o\n", n1);
    printf("7. Convert 001 101 010 from base 2 to octal");
    char num7[] = "001101010";
    //printf("\nQ7. %s \n",num7);
    n1 = strtol(num7, NULL, 2);
    printf("\n  %04o\n", n1);
    printf("8. Convert 2c80 from hexadecimal to binary\n");
    char num8[]="0x2c80";
    n1 = strtol(num8, NULL, 16);

    //printf("\nQ8. n1=%04x  %ld\n", n1,n1);  // prints 12406
    decimal_Binary(n1);
    printf("\n9. Convert 1101 0100 from base 2 to decimal");
   char num9[]="11010100";
    n1 = strtol(num9, NULL, 2);
    //printf("\nQ9. %s\n",num9);
    printf("\n  %ld\n",n1);
    printf("10. Convert 14 from octal to base 2\n");
    char num10[] = "014";

    //printf("\nQ10. %s \n",num10);
    n1 = strtol(num10, NULL, 8);
    decimal_Binary(n1);

    return 0;
}
