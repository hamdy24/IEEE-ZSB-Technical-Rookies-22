#include <stdio.h>
#include <stdlib.h>

int main()
{
    long arr_num , k_num , q_num , i;
    long arr[100000];

    printf("Enter number of array elements, the rotation count, the number of queries: \n");
    scanf(" %ld %ld %ld",&arr_num,&k_num,&q_num);

    long r = k_num % arr_num;

    //taking elements rotated at the same time by starting from non rotated position
    //then return to the start and enter the rotated elements

    printf("Enter the array elements:\n ");
    for(i=r;i<arr_num;i++)
        scanf("%ld",&arr[i]);

    printf("Enter the queries indexes: \n");
    for(i=0;i<r;i++)
        scanf("%ld",&arr[i]);

    for(i=0;i<q_num ;i++)
    {
        scanf("%ld",&k_num);
        printf("%ld\n",arr[k_num]);
    }

    return 0;
}
