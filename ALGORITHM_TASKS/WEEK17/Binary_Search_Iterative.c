/* 2.2 Implement a function that performs binary search
algorithm using Iterative approach.
*/
#include <stdio.h>
int binarysearch(int arr[],int n,int x)
{
    int Low=0;
    int High=n-1;
    while(Low<=High)
    {
            int Mid=Low+(High-Low)/2;
        if(x==arr[Mid])
        {
            return Mid;
        }else if(x<arr[Mid])
        {
            High=Mid-1;
        }else{
            Low=Mid+1;
        }
    }
    return -1;
}
int main()
{
int A[]={15,17,22,50,56,77,80};
printf("Enter The Number : ");
int x; scanf("%d",&x);
int pos=binarysearch(A,7,x);
if(pos!=-1)
{
    printf("\nThe Number %d is in index %d",x,pos);
}else{
    printf("\nNumber Not Found !");
}
    return 0;

}