#include<stdio.h>

/******** Calculating Area and perimeter for a rectangular *************/

int main(void)
{
    int length , width;
    printf("Please,Enter the length and the width needed :\n");

    scanf(" %d",&length);
    scanf(" %d",&width);

    printf("The area = %d \n", (length * width));

    printf("The perimeter = %d \n", (2 * (length + width) ) );

    return 0;
}


