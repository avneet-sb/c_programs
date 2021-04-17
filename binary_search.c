#include <stdio.h>
#define max 100
int binary_srch(int arr[], int size, int item);
void main(void)
{
    int arr[max], size, index, item;
    printf("enter the number of elements\t");
    scanf("%d", &size);
    for (int i = 0; i < size; i++)
    {
        printf("enter the %d element\t", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("item that u want to be search\t");
    scanf("%d", &item);
    index = binary_srch(arr, size, item);
    printf("your element at position %d",index+1);
}

int binary_srch(int arr[], int size, int item)
{
    int up, low, mid;
    low = 0;
    up = size-1;
    while (low <= up)
    {
        mid = (up + low) / 2;
        if (item > arr[mid])
            low = mid + 1;
        else if (item < arr[mid])
            up = mid - 1;
        else
            return mid;
    }
    return -1;
}