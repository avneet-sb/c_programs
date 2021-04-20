#include <stdio.h>
#define max 100
void insertion_sort(int arr[], int num);
void main(void)
{
    int arr[max],num;
    printf("enter  the number of elements you want to insert :\n");
    scanf("%d", &num);
    for (int i = 0; i < num; i++)
    {
        printf("enter the element %d\t", i + 1);
        scanf("%d", &arr[i]);
    }
    insertion_sort(arr,num);
    printf("your sorted array or list:\n");
    for (int i = 0; i < num; i++)
        printf("%d\t", arr[i]);

}
void insertion_sort(int arr[],int num)
{
    int sort,j;
    for (int i = 1; i < num; i++)
    {
        sort = arr[i];
        for (j = i-1 ; j >=0 && arr[j]>sort ; j--)
            arr[j+1] = arr[j];
        arr[j+1] = sort;
    }
}
