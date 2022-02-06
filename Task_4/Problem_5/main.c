#include <stdio.h>
#include <stdlib.h>

int findDigits(int n)
{
    int devisors = 0 , term ,temp;
    temp = n;
    while(temp > 0)
    {
      term = temp % 10;
        if(term != 0 && n%term == 0)
        {
        devisors++;
        }
      temp /= 10;
    }

    return devisors;
}

int main()
{
    int t;
    printf("Enter number of test cases: ");
    scanf(" %d",&t);

    for (int t_itr = 0; t_itr < t; t_itr++)
    {
        int n;
        printf("\nEnter a number to be analyzed: ");
        scanf(" %d",&n);

        int result = findDigits(n);
        printf("%d",result);
    }

    return 0;
}
