#include <stdio.h>
#include <stdlib.h>
void sesort(int *a, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int temp;
        int j = i + 1;
        int min = i;
        while (j < n)
        {
            if (a[min] > a[j])
            {
                min = j;
            }
            j++;
        }
        temp = a[min];
        a[min] = a[i];
        a[i] = temp;
    }
}
int main()
{
    int a[] = {3, 12, 36, 13, 111, 48, 45, 6};
    int n = 8;
    sesort(a, n);
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}