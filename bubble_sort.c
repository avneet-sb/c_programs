#include <stdio.h>
#define size 100
void bubble_sort(int arr[], int num);
void main(void)
{
    int arr[size], num;
    printf("enter  the number of elements you want to insert :\n");
    scanf("%d", &num);
    for (int i = 0; i < num; i++)
    {
        printf("enter the element %d\t", i + 1);
        scanf("%d", &arr[i]);
    }
    bubble_sort(arr, num);
    printf("your sorted array or list:\n");
    for (int i = 0; i < num; i++)
        printf("%d\t", arr[i]);
}
void bubble_sort(int arr[], int num)
{
    int find, temp;
    for (int i = 0; i < num - 1; i++)
    {
        int xchanges = 0;
        for (int j = 0; j < num - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                xchanges++;
            }
        }
        if (xchanges == 0)
            break;
    }
}
# leanrning for branch system
