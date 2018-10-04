//file name: RhombusDiamond.c
//10/1/18
//Given the number of rows, program creates the Rhombus or Diamond
//Prem Agarwal

#include <stdio.h>

void main() {
    // Define variables
    int rows, stars, blanks,num_of_stars, num_of_rows;
    // Get input for number of stars
    printf("Enter the number of rows in Pyramid:  ");
    scanf("%d", &num_of_rows);
    num_of_stars = num_of_rows;
    //Start the first row with spaces equal to number of star, followed by star
    //Second row would have num_of_stars - 1 spaces, followed by star, followed by space, followed by star
    //3rd row would have num_of_stars - 2 spaces, followed by star etc.
    //If there are 6 rows, meaning 6 stars, first star at 7 spaces from left, second row star at 5 spaces from left and so on
    for (rows=1; rows <= num_of_rows; rows++) {
            for (blanks=1; blanks <= num_of_stars; blanks++) {
                    printf(" ");
                }
            for (stars=1; stars <= rows; stars++) {
                    printf("*");
                    printf(" ");
                }
            printf("\n");
            num_of_stars-- ;
        }

    // For Diamond - reverse, reduce one row
        num_of_rows--;
        num_of_stars = num_of_rows;
    for (rows=1; rows <= num_of_rows; rows++) {
            for (blanks=1; blanks <= rows; blanks++) {
                    printf(" ");
                }
            for (stars=1; stars <= num_of_stars; stars++) {
                    printf(" ");
                    printf("*");
                }

            printf("\n");
            num_of_stars-- ;
        }
}
