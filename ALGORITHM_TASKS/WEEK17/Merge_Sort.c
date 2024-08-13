/* Write a C program to input elements in two array and
merge two array to third array.*/
#include <stdbool.h>
#include <stdio.h>

void MergeSort(int first[],int second[],int nf,int ns,int result[])
{
    int i=0,j=0,k=0;
    while(i<nf && j<ns)
    {
        if(first[i]<second[j])
        {
            result[k]=first[i];
            i++;
        }else{
            result[k]=second[j];
            j++;
        }
        k++;
    }
    while(i<nf)
    {
        result[k]=first[i];
        k++;
        i++;
    }
     while(j<ns)
    {
        result[k]=second[j];
        k++;
        j++;
    }
}
int main()
{
  
    int n1,n2; 
    printf("Enter size of first array >> ");
    scanf("%d",&n1);

    int arrfirst[n1];

    printf("\nEnter elements of first array >> ");
    for(int i=0;i<n1;i++)
    {
        scanf("%d",&arrfirst[i]);
    }


     printf("\nEnter size of second array >> ");
    scanf("%d",&n2);

     int arrsecond[n2],res[n1+n2];

    printf("\nEnter elements of second array >> ");
    for(int i=0;i<n2;i++)
    {
        scanf("%d",&arrsecond[i]);
    }

    MergeSort(arrfirst,arrsecond,n1,n2,res);
    printf("\nSorted array >> ");

    for(int i=0;i<n1+n2;i++)
    {
        printf("%d ",res[i]);
    }
    return 0;
}
