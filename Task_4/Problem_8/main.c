#include <stdio.h>
#include <stdlib.h>

int* stones(int n, int a, int b, int* result_count)
{
   *result_count = n;

     int *arr = malloc(n * sizeof(int));
    if(a==b)
        {
        *(arr )= a*(n-1);
        *result_count = 1;
        }
     else
     {
     for(int i=0 ;i<n ;i++)
     {
        if(a<b)
        {
        *(arr + i)= b * i + a * (n - 1 - i);
        }
        else if(a>b)
        {
        *(arr + i)= a * i + b * (n - 1 - i);
        }
     }
     }

 return arr;
}

int main()
{
    int t,n,a,b;
    printf("Enter number of test cases:");
    scanf(" %d",&t);
    for(int i=0 ; i<t ; i++)
    {
        printf("Enter number of non zero stones:");
        scanf(" %d",&n);
        printf("Enter two possible deferences: ");
        scanf(" %d %d",&a,&b);

        int result_count;
        int* result = stones(n, a, b, &result_count);
        for (int i = 0; i <result_count; i++)
            {
            printf("%d", *(result + i));

            if (i !=result_count -1 )
            {
                printf(" ");
            }
        }

        printf("\n");

    }

    return 0;
}
