#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,d,t_num=0;
    printf("Enter number of array elements: ");
    scanf(" %d",&n);
    printf("Enter the beautiful deference : ");
    scanf(" %d",&d);

    int arr[n];
    printf("Enter the sequence of elements: ");
    for(int i=0;i<n;i++)
    {
        scanf(" %d",&arr[i]);
    }

    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]-arr[i]!=d)
                continue;
            for(int k=j+1;k<n;k++)
            {
                if(arr[j]-arr[i]==arr[k]-arr[j] && arr[k]-arr[j]==d)
                    t_num++ ;
            }
        }
    }
    printf("Number of beautiful Triplets is: %d",t_num);
    return 0;
}
