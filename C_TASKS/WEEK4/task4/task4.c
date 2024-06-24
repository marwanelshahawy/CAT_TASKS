/*Write a C code to find the repeating element in a given array through a function. The
function takes the array and returns the element.*/
#include <stdio.h>
#define M 100
int repeating(int arr[],int size);
int main()
{
   int n, repeat;
  printf("Enter the legnth of array >> ");
  scanf("%d",&n);
  int arr[n];
  printf("Enter the array element : \n");
  for(int i=0;i<n;i++)
  {
      scanf("%d",&arr[i]);
  }
repeat = repeating(arr,n);
  printf("The repeating element is >> %d",repeat);

    return 0;

}
int repeating(int arr[], int size) 
{
    for (int i = 0; i < size; i++) 
    {
        for (int j = i + 1; j < size; j++) 
        {
            if (arr[i] == arr[j])
                return arr[i]; 
        }
    }
    return -1;
}