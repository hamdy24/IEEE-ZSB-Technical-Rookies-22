#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int getTotalX(int arr_count, int* a, int brr_count, int* b);

int main()
{
    int n,m;
    printf("Enter number of elements of the two arrays separated: \n");
    scanf(" %d   %d",&n,&m);

    int a[n],b[m];

    printf("\nEnter first array elements:\n");
    for(int i=0 ; i<n ; i++)
    {
        scanf(" %d",&a[i]);
    }

    printf("\nEnter second array elements:\n");
    for(int i=0 ; i<m ; i++)
    {
        scanf(" %d",&b[i]);
    }

    int total = getTotalX(n , a , m , b);

    printf("\nNumber of integers that are between the sets = %d\n",total);


    return 0;
}


int getTotalX(int arr_count, int* a, int brr_count, int* b)
{
int counter = 0;

    for(int i=1; i<=100; i++)
    {

        int check = 1;

        for(int j = 0; j < arr_count; j++)
        {
            for(int y = 0; y < brr_count; y++)
            {
                //statement makes all of a[] factors of i and i factor of all of b[]
                if(i % a[j] || b[y] % i)
                {
                     check = 0;
                }
            }
        }

        if(check) {
        counter++;
        }
    }
    return counter;
}



