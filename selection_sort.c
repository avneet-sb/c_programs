#include <stdio.h>
#define max 100
void selection_sort(int arr[], int size, int item);
void main(void)
{
    int arr[max], num, item;
    printf("enter the no of elements you want to add:\t");
    scanf("%d", &num);
    for (int i = 0; i < num; i++)
    {
        printf("enter the %d element:\t", i + 1);
        scanf("%d", &arr[i]);
    }
    selection_sort(arr, num, item);
    printf("the sorted array is :");
    for (int k = 0; k < num; k++)
        printf("%d\t", arr[k]);
}

void selection_sort(int arr[], int size, int item)
{

    int temp, min;
    for (int i = 0; i < size - 1; i++)
    {
        min = i;
        for (int j = i + 1; j < size; j++)
            if (arr[min] > arr[j])
                min = j;
        if (i != min)
        {
            temp = arr[i];
            arr[i] = arr[min];
            arr[min] = temp;
        }
    }
}