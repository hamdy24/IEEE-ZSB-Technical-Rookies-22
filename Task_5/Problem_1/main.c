#include <stdio.h>
#include <stdlib.h>

void Heapify ( int arr[],int ele_num, int i);
void MaxHeap(int arr[],int ele_num);

int main()
{
    int num;
    printf("Enter number of array elements:\n");
    scanf(" %d",&num);
    int arr[num];
    printf("Enter array elements:\n");
    for (int i=0;i<num;i++)
        scanf(" %d",&arr[i]);

    Build_Max_Heap(arr,num);
    printf("Array after heap sort:\n");
    for (int i = 0; i < num; i++)
    printf("%d  ",arr[i]);

    return 0;
}


void Max_Heapify ( int arr[],int ele_num,int i)
{
    int left_index = 2*i + 1 ,right_index = 2*i + 2;
	int max_index = i;

	if(left_index < ele_num //checking if left index is in ranfge
        && arr[max_index] < arr[left_index] ) //checking if left child is bigger then assign it if so
        max_index = left_index;

    if(right_index < ele_num //same as we did to left index
        && arr[max_index] < arr[right_index] ) // and this time with the result of the first if check
        max_index = right_index;

// after all checks if initial max index changed then swap the values of current and max
    if(max_index != i)
    {
        int temp = arr[i];
        arr[i] = arr[max_index];
        arr[max_index] = temp;
        Max_Heapify(arr , ele_num , max_index); // heapify again with the new changes
    }
}
void Build_Max_Heap(int arr[],int ele_num)
{
        for (int i = ele_num / 2 - 1; i >= 0; i--)
		Max_Heapify(arr,ele_num, i);
}

