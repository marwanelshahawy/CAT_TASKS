/*Write a C code that defines 2 arrays, and sends them to a function that applies scalar
multiplication between the two arrays and returns the result, the main function then will
print the result.*/
#include <stdio.h>
#define M 5
void mul(int *a,int *b,int *res)
{
    for(int i=0;i<M;i++)
    res[i]=a[i] * b[i];

}
int main()
{
    int arr1[M]={1,5,4,9,7};
    int arr2[M]={6,8,9,7,4};
    int res[M];
    mul(arr1,arr2,res);
    for(int i=0;i<M;i++)
    printf("%d ",res[i]);

  
    return 0;

}