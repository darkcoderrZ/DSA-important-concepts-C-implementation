#include <stdio.h>
int finarr(int arr[], int usize, int find, int mid, int low, int high)
{
    if (arr[low] == find)
    {
        return low;
    }
    else if (arr[high] == find)
    {
        return high;
    }
    else if (arr[mid] == find)
    {
        return mid;
    }
    else if (low == mid || mid == high || low == high && arr[low] != find && arr[high] != find && arr[mid] != find)
    {
        return -1;
    }
    else if (arr[low] < find && arr[mid] > find)
    {
        high = mid;
        mid = (high + low) / 2;
        return finarr(arr, usize, find, mid, low, high);
    }
    else if (arr[high] > find && find > arr[mid])
    {
        low = mid;
        mid = (low + high) / 2;
        return finarr(arr, usize, find, mid, low, high);
    }
    else if (find > arr[high] || find < arr[low])
    {
        return -1;
    }
}
int main()
{
    int usize = 9;
    int low = 0, high = usize - 1, mid;
    mid = (high + low) / 2;
    int find = 476;
    int arr[100] = {2, 8, 14, 32, 66, 100, 104, 200, 400};
    int x = finarr(arr, usize, find, mid, low, high);
    if (x > 0)
    {
        printf("%d", x);
    }
    else if (x == -1)
    {
        printf("element not found");
    }
    return 0;
}