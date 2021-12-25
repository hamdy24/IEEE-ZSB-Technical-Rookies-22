#include <stdio.h>
#include <stdlib.h>


#define MAX_ELEMENTS            101
#define INDEVIDUAL_APPEARANCE   1

int sockMerchant(int num , int* arr)
{
    int pairs_num = 0;

    int arr_counts[MAX_ELEMENTS] = {0};
     // initialized with zero to be ready for counting

    int j; // this variable will represent the sock id

    for(int i = 0 ; i < num ; i++)
    // creating an array of number of appearances for each color
    {
        j = arr[i];
        arr_counts[j]++;
    }

    for(int i = 0 ; i < MAX_ELEMENTS ; i++)
    {
        if(  arr_counts[i] >= 1 && arr_counts[i] <= 100) // value constrains
        {
            if(arr_counts[i] % 2 == 0)
            // if a particular color has an even number of appears ( means being a pair)
            {
                pairs_num += (arr_counts[i] / 2);
            }
           else
             pairs_num += ( ( arr_counts[i] - INDEVIDUAL_APPEARANCE ) / 2);
        }
    }


    return pairs_num;
}


int main()
{
    int num;
    printf("Enter number of socks:\n");
    scanf(" %d",&num);

    int arr[num];

    printf("\nEnter the colors :\n");

    for(int i = 0 ; i < num ; i++)
    {
        scanf(" %d", &arr[i]);
    }

    int pairs ;
    pairs = sockMerchant(num , arr);
    printf("%d",pairs);



    return 0;
}

