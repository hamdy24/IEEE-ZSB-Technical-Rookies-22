#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num , i = 0 ;

    printf("Enter number of scores to store: \n");

    //taking number of list elements
    scanf(" %d",&num);

    int list[num];
    printf("Enter the scores:\n");

    // storing list elements
    for(i=0 ; i<num ; i++)
    {
        scanf(" %d", &list[i]);
    }

    int max = list[0] , second_max;

    for(i=0 ; i<num ; i++)
    {
        if(list[i] > max )
        {
            second_max = max;
            max = list[i];
        }
        else if(list[i] > second_max && list[i] != max)
        {
          second_max = list[i];
        }
    }

    printf("The second maximum score equals: %d", second_max);


    return 0;
}
