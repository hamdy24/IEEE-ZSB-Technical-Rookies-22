#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n , last = 0 , current = 1;
    printf("Enter number of fibonacci numbers you want to display: \n");
    scanf(" %d",&n);

    printf("%d  ",last );
    for(int i=1 ; i<n ; i++)
    {
        printf("%d   ",current);

        current = last + current;
        last = current - last;

    }

    return 0;
}
