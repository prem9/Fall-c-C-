#include <stdio.h>
void main()
{
    char str[10];
    int i;
    printf("\nEnter a String ");
    gets(str);
    for (i = 0;str[i] != '\0';i++)
    {
        if (str[i] >= 65 && str[i] <= 90)
        {
            str[i] = str[i] + 32;
        }
        else if (str[i] >= 97 && str[i] <= 122)
        {
            str[i] = str [i] - 32;
        }
        else
        {
            str[i] = str[i];
        }
    }
    printf("\n Converted String is : %s", str);
}
