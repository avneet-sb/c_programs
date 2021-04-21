#include <stdio.h>
#define MAX 10
void merge_sort(int arr1[], int arr2[], int arr3[], int n1, int n2);
void main(void)
{
    int arr1[MAX], arr2[MAX], arr3[2*MAX], n1, n2, i;
    printf("enter number of numbers in first array\t");
    scanf("%d", &n1);
    for (i=0; i<n1; i++)
    {
        printf("enter element %d:\t", i+1);
        scanf("%d", &arr1[i]);
    }
    printf("enter number of numbers in second array\t");
    scanf("%d", &n2);
    for (i=0; i<n2; i++)
    {
        printf("enter element %d:\t", i+1);
        scanf("%d", &arr2[i]);
    }
    merge_sort(arr1, arr2, arr3, n1, n2);
    printf("merged list : ");
    for (i=0; i<n1+n2; i++)
    {
        printf("%d ", arr3[i]);
    }
}
//-----------------------------------------------------------------
void merge_sort(int arr1[], int arr2[], int arr3[], int n1, int n2)
{
    int i=0, j=0, k=0;
    while ((i<=n1-1)&&(j<=n2-1))
        if (arr1[i] > arr2[j])
        {
            arr3[k++] = arr2[j++];
        }
        else
        {
            arr3[k++] = arr1[i++];
        }
    while (i<=n1-1)
        arr3[k++] = arr1[i++];
    while (j<=n2-1)
        arr3[k++] = arr2[j++];
}