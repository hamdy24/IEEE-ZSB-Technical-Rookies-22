#include <stdio.h>
#include <stdlib.h>

int sum =0  , n;

int For_Loop_Sum(int arr[]);
int While_Loop_Sum(int arr[]);
int Recursion_Sum(int arr[] , int temp2);

int main()
{
    int array[1000];
    char check;

    printf("Enter number of list elements:\n");
    scanf(" %d",&n); //taking number of elements

    printf("Enter the elements:\n");

    for(int i=0 ; i<n ; i++) //taking elements
    {
        scanf(" %d%c", &array[i], &check);
    }

    printf("\nFor Loop Sum   = %d" , For_Loop_Sum(array));
    printf("\nWhile Loop Sum = %d" , While_Loop_Sum(array));
    printf("\nRecursion Sum  = %d" , Recursion_Sum(array , n ));


    return 0;
}

int For_Loop_Sum(int arr[])
{
    sum=0;
    for(int i = 0 ; i < n ; i++)
    {
        sum += arr[i];
    }
    return sum;
}

int While_Loop_Sum(int arr[])
{
    int temp1 = n;
    sum = 0 ;
    while( --temp1 >= 0)
    {
        sum += arr[temp1];

    }
    return sum;
}
int Recursion_Sum(int arr[] , int temp2)
{

      if( --temp2 >= 0)
    {
        return (arr[temp2] + Recursion_Sum(arr , temp2));
    }

}





