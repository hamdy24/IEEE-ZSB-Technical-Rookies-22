#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Enter number of matrix's row elements: \n");
    int n;
    scanf(" %d",&n);
    int arr[n][n];

    printf("Insert your matrix elements row by row and separated:\n");
    for(int x = 0 ; x < n ; x++)
    {
        for(int y = 0 ; y < n ; y++)
        {
            scanf(" %d",&arr[x][y]);
        }
        printf("\n");
    }

    int sum1 = 0, sum2 = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            // for primary diagonal
            if (i == j)
                sum1 += arr[i][j];

            // for secondary diagonal
            if (i == n - j - 1)
                sum2 += arr[i][j];
        }
    }

    if(sum1<=sum2)
    {
        printf("Diagonal difference equals: %d ", sum1-sum2);
    }
    if(sum1>sum2)
    {
        printf("Diagonal difference equals: %d ", sum2-sum1);
    }

    return 0;
}
