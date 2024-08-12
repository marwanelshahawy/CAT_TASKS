/* 2.1 Implement a function that performs binary search
algorithm using a recursive approach.
*/
// Optimized implementation of Bubble sort
#include <stdbool.h>
#include <stdio.h>

void swap(int* x, int* y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

void bubbleSort(int arr[], int n)
{
    int i, j;
    bool flag;
    for (i = 0; i < n - 1; i++) {
        flag = false;
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
                flag = true;
            }
        }
        if (flag == false)
            break;
    }
}

int main()
{
    int arr[] = { 64, 34, 25, 12, 22, 11, 90 };
    bubbleSort(arr, sizeof(arr) / sizeof(arr[0]));
    for(int i=0;i<sizeof(arr) / sizeof(arr[0]);i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
