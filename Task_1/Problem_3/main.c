#include <stdio.h>
#include <stdlib.h>

int search(int array[] , int start_index , int end_index , int search_number );

int main(void)
{
    // given the following sorted array
    int array[] = {1  ,2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 , 10 , 11 , 12 , 13 , 14 , 15 , 16 , 17 , 18 , 19 };

    int search_num ;
    int elements_num = ( sizeof(array) / sizeof(array[0]) );

    printf("Enter a number to search \n");
    scanf(" %d",&search_num);

    int index_value = search(&array , 0 , elements_num-1 , search_num);

    if(index_value != -1)
    {
        printf("Number exists in the array at index: %d starting from index 0 ", index_value);
    }
    else
        printf("Please, Try again with another number");


    return 0;
}


int search(int  array[] , int start_index , int end_index , int search_number )
{
    if( end_index >= start_index )
    {
         int mid = start_index + (end_index - start_index) / 2;

         if( search_number == array[mid]  )
         {
             return mid;
         }
         if( search_number > array[mid])
         {
             return search(array, mid+1 ,end_index , search_number);
         }
         if( search_number < array[mid])
         {
             return search(array , 0 , mid-1 , search_number);
         }
    }


    return -1;
}

