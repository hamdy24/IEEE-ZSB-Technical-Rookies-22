#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    float capacity;
    float remaining;

}bottle;

int main()
{
    int num;
    printf("Enter number of bottles:\n");
    scanf(" %d",&num);
if(num>1)
{
    bottle bottles_data[num];

    for(int i = 0 ; i < num ; i++)
    {
        printf("bottle %d capacity is:\n",i+1);
        scanf(" %f",&bottles_data[i].capacity);

        printf("bottle %d remaining is:\n",i+1);
        scanf(" %f", &bottles_data[i].remaining);
    }

    //want to compare all remaining with sum of biggest two capacities
    float remaining_sum , capacity_sum , max_capacity = bottles_data[0].capacity , second_max_capacity;

    //finding the biggest two capacities
    for(int i=0 ; i<num ; i++)
    {
        if(bottles_data[i].capacity > max_capacity )
        {
            second_max_capacity = max_capacity;
            max_capacity = bottles_data[i].capacity;
        }
        else if(bottles_data[i].capacity > second_max_capacity && bottles_data[i].capacity <= max_capacity)
        {
          second_max_capacity = bottles_data[i].capacity;
        }
    }

    capacity_sum = max_capacity + second_max_capacity;

    for(int i=0 ; i<num ; i++)
    {
        remaining_sum += bottles_data[i].remaining;
    }

    if(remaining_sum <= capacity_sum)
    {
        printf("Yes");
    }
    else
    {
        printf("No!");
    }

}
else
    printf("\nInvalid number of bottles");

    return 0;
}
