#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n_days ,needed_time ,day=86400;
    printf("Enter number of working days:\n");
    scanf(" %d",&n_days);

    int arr[n_days];
    printf("Enter total time needed to finish the book:\n");
    scanf(" %d",&needed_time);

    printf("Enter each day working time separated:\n");
    for(int i=0;i<n_days;i++)
    {
        scanf(" %d",&arr[i]);
    }

    int days_needed=0 , time_sum=0 , i=0;
    while(time_sum < needed_time )
    {
     time_sum += (day - arr[i]);
     i++;
     days_needed++;
    }
    if(time_sum >= needed_time)
    {
        printf("Days needed equal: %d",days_needed);
    }
    else
        printf("No enough days");

    return 0;
}
