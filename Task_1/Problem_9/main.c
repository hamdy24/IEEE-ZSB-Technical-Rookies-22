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

/*
void main()
{
    // generate fibonacci
    int n;
    int previous = 1;
    int number = 0;

    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        printf("%d\t", previous);
        previous += number;
        number = previous - number;
    }
}

*/

