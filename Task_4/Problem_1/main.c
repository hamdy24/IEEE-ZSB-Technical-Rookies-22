#include <stdio.h>
#include <stdlib.h>

int main()
{
    // taking the array from user
    int n;
    printf("Enter number of array's elements : \n");
    scanf(" %d",&n);

    int arr[n];

    printf("\nEnter array elements:\n");
    for(int i=0 ; i<n ; i++)
    {
        scanf(" %d",&arr[i]);
    }

    // finding minimum distance between similar numbers
    int i , j , min_dis = 100 ;
    for(i = 0 ; i < n-1 ; i++)
    {
      for( j = i+1 ; j < n ; j++)
      {
        if( (arr[i] == arr[j]) && (min_dis >= j - i) )
        {
            min_dis = j - i;
        }
      }
    }

    printf("\nMinimum distance equal: %d " , min_dis);


        return 0;
}
