#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    printf("Enter the number\n");
    scanf(" %d",&num);

    int arr_digits[4] , temp , max_sum , min_sum , count = 0;

    while(num != 6174)
    {
        temp = num;

     //slice the number into arr[4]
     for(int i=0 ; i<4 ;i++)
     {
       arr_digits[i] = temp%10;
        temp /= 10;
     }
     //now we arrange the number by arranging the array

     for(int i=0 ; i<4 ; i++)
    {
        for(int j=0 ; j<4 ; j++)
     {
         if(arr_digits[j]<arr_digits[i])
         {
             temp = arr_digits[i];
             arr_digits[i] = arr_digits[j];
             arr_digits[j] = temp;
         }
     }
    }
    max_sum = arr_digits[0] * 1000 + arr_digits[1] * 100 + arr_digits[2] * 10 + arr_digits[3];
    min_sum = arr_digits[3] * 1000 + arr_digits[2] * 100 + arr_digits[1] * 10 + arr_digits[0];

    num = max_sum - min_sum;
    count++;

    }
    if(num == 6174)
    {
        printf("The number took %d times to be equal to 6174  " , count);
    }

    return 0;
}
