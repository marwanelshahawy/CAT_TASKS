/*Implement a function that takes in an array and returns
the sorted version of this array using Merge sort
algorithm.*/
#include <stdbool.h>
#include <stdio.h>
void mergeSort(int arr[], int L, int R) {
    if (L < R) {
        
        int mid = L + (R - L) / 2;
        mergeSort(arr, L, mid);
        mergeSort(arr, mid + 1, R);
        int n1 = mid - L + 1;
        int n2 = R - mid;
        int first[n1], second[n2];
        for (int i = 0; i < n1; i++) {
            first[i] = arr[L + i];
        }
        for (int j = 0; j < n2; j++) {
            second[j] = arr[mid + 1 + j];
        }

        int i = 0, j = 0, k = L;
        while (i < n1 && j < n2) {
            if (first[i] <= second[j]) {
                arr[k] = first[i];
                i++;
            } else {
                arr[k] = second[j];
                j++;
            }
            k++;
        }

        while (i < n1) {
            arr[k] = first[i];
            i++;
            k++;
        }

        while (j < n2) {
            arr[k] = second[j];
            j++;
            k++;
        }
    }
}
int main()
{
    int n; 
    printf("Enter size of array >> ");
    scanf("%d",&n);

    int arr[n];

    printf("\nEnter elements of array >> ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    mergeSort(arr,0,n-1);
    printf("\nSorted array >> ");

    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}