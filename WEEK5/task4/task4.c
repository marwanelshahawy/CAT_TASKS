/*Write a C code that defines a function which takes an array as input argument and apply
the bubble sorting algorithm on it, then prints the result.*/
#include <stdio.h>
void bubble(int size , int *a)
{ int m;
    for(int i=0;i<size-1;i++)
    {
        if (a[i]>a[i+1])
        {
            m=a[i];
            a[i]=a[i+1];
            a[i+1]=m;
        }
    }
}
int main()
{
  int arr[]={7,2,9,6,4};
  int size = sizeof(arr)/sizeof(arr[0]);
  bubble(size,arr);
  for(int i=0;i<size;i++)
  printf("%d ",arr[i]);
  

    return 0;

}