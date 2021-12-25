#include <stdio.h>
#include <stdlib.h>
#include<time.h>

int main()
{
	srand(time(0));
    int random = (rand() % 10) + 1;
    int num , counter = 0;

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