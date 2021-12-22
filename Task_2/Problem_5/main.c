#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num , i = 0 ;

    printf("Enter number of list elements: \n");

    //taking number of list elements
    scanf(" %d",&num);

    int list[num];
    printf("Enter the list you want to sort:\n");

    // storing list elements
    for(i=0 ; i<num ; i++)
    {
        scanf(" %d", &list[i]);
    }

    //sorting
    int temp , j;
    for(i=0 ; i<num ; i++)
    {
        temp = list[i];

        j = i - 1; //to compare i with all previous j

//this loop compares current element with all previous elements if previous element is bigger than current move it to the next index

        while(j > 0 && list[j] > temp)
        {
            list[j+1] = list[j];
            j--;
        }

        list[j+1] = temp;
    }

    for(i=0 ; i<num ; i++) // printing sorted list
    {
        printf("%d  ", list[i]);
    }



    return 0;
}
