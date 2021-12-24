#include <stdio.h>
#include <stdlib.h>

int* breakingRecords(int scores_count, int* scores, int* result_count)
{
    int max ,min ,max_count = 0 , min_count = 0 ;
    max = min = scores[0];
    for (int i = 1; i < scores_count ; i++)
    {
        if (scores[i] > max)
        {
            max = scores[i];
            max_count++;
        }
        if (scores[i] < min)
        {
            min = scores[i];
            min_count++;
        }
    }
    result_count[0] = max_count;
    result_count[1] = min_count;

    return result_count;
}

int main()
{
    int num;
    printf("Enter number of games\n");
    scanf(" %d",&num);

    int* scores = malloc(sizeof(int) * num);

    printf("Enter game scores :\n");

    for(int i=0 ; i<num ; i++)
    {
        scanf(" %d",&scores[i]);
    }

    int result_count;
    int* result = breakingRecords(num , scores ,&result_count);

       printf("\nCounts of breaking maximum records is : %d  " , result[0]);
       printf("\nCounts of breaking minimum records is : %d  " , result[1]);

    return 0;
}
