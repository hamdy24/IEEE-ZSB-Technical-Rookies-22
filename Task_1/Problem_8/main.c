#include <stdio.h>
#include <stdlib.h>
#include<time.h>

int main()
{
    int random = (rand() % 10) + 1;
    int num , counter;

    printf("Enter the number you expect:\n");
    scanf(" %d" ,&num );

    while(num != random)
    {
        printf("Oops! Try another number:\n");
        scanf(" %d", &num);
        counter++;
    }

       printf("You made it, the number is:(%d) and you took ( %d ) tries to guess it" ,num , counter+1);



    return 0;
}
