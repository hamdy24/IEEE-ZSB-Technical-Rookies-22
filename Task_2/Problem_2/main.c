#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num , i = 0 ;

    printf("Enter number of list elements: \n");

    //taking number of list elements
    scanf(" %d",&num);

    int list[num];
    printf("Enter the sorted list you want:\n");

    // storing list elements
    for(i=0 ; i<num ; i++)
    {
        scanf(" %d", &list[i]);
    }

    int temp[num] , j = 0 ;

    for( i =0 ; i <= num-1 ; i++)//num - 1 as index is less than num by 1
    {
        //storing just the unduplicated
        if(list[i] != list[i+1])
        {
            temp[j++] = list[i];

        }
    }

    // copying unduplicated list to the original
    for( i = 0 ; i<j ; i++)
    {
        list[i] = temp[i];
    }

    //printing the output list
     for(int i=0 ; i<j ; i++)
    {

       printf("%d   ",list[i]);
    }


    return 0;
}

