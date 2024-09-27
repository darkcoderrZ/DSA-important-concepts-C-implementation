#include <stdio.h>
#include <stdlib.h>
int partition(int *a, int low, int high)
{
    int pivot = low;
    int i = low + 1;
    int j = high;
    int temp;
    do
    {
        while (a[pivot] >= a[i])
        {
            i++;
        }
        while (a[pivot] < a[j])
        {
            j--;
        }
        if (i < j)
        {
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
    }while (i < j);
    temp = a[pivot];
    a[pivot] = a[j];
    a[j] = temp;
    return j;
}
void quicksort(int *a, int low, int high)
{
    int index;
    if (low < high)
    {
        index = partition(a, low, high);
        quicksort(a, low, index - 1);
         for (int i = 0; i < 9; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
        quicksort(a, index + 1, high);
         for (int i = 0; i < 9; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
    }
}
int main()
{
    int a[] = {45, 48, 50, 12, 13, 86, 55, 30, 49};
    //45 30 50 12 13 86 55 48 49
    //45 30 13 12 50 86 55 48 49
    //12 30 13 45 50 86 55 48 49
    //12 13 30 45 48 49 50 55 86
    int n = 9;
    quicksort(a, 0, n - 1);
    // for (int i = 0; i < n; i++)
    // {
    //     printf("%d ", a[i]);
    // }
    return 0;
}