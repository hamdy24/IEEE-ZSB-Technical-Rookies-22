#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num , i , j ;

    printf("Enter number of list elements: \n");

    //taking number of list elements
    scanf(" %d",&num);

    int list[num];
    printf("Enter a list with at least two similar numbers :\n");

    // storing list elements
    for(i=0 ; i<num ; i++)
    {
        scanf(" %d", &list[i]);
    }

    int min = 500 , num1_index , num2_index;

    for(i=0 ; i<num-1 ; i++)
    {
        for(j=i+1 ; j<num ; j++)
        {
            if(list[i] == list[j])
            {
                if( min >= (j-i) )
                {
                    min = j-i;
                }
            }
        }
    }

    printf("\nMinimum distance equal: %d ",min);



    return 0;
}
