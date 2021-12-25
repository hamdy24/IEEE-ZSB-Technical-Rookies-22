#include <stdio.h>
#include <stdlib.h>


int migratoryBirds(int arr_num, int* arr)
{
    int result , type_counts = 0 ,arr_iterat = 0 , types_iterat = 1 , max_counts = 0;

    while (types_iterat <= 5 )
        {
        type_counts = 0;
        arr_iterat = 0;

        while (arr_iterat < arr_num)
            {
            if (arr[arr_iterat] == types_iterat)
            {
               type_counts++;
            }
                arr_iterat++;
            }
        if (type_counts > max_counts)
            {
            result = types_iterat;
            max_counts = type_counts;
        }
        types_iterat++;
    }

    return result;
}


int main()
{
    int num;
    printf("Enter number of types of sighted birds:\n");
    scanf(" %d",&num);

    int arr[num];
    printf("\nEnter the types:\n");
    for(int i=0 ; i< num ; i++)
    {
        scanf(" %d",&arr[i]);
    }

    int result = migratoryBirds( num , arr);
    printf("\nThe lowest type of the most frequently sighted birds is: %d\n",result);


    return 0;
}
