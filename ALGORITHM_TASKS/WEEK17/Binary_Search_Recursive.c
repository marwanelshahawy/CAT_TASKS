/* 2.1 Implement a function that performs binary search
algorithm using a recursive approach.
*/
#include <stdio.h>
int binarysearch(int arr[],int Low,int High, int x)
{
    if(Low>High)
    {
        return -1;
    }
    int Mid=Low+(High-Low)/2;
    if(x==arr[Mid])
    {
        return Mid;
    }else if(x<arr[Mid])
    {
        binarysearch(arr,Low,Mid-1,x);
    }else{
        binarysearch(arr,Mid+1,High,x);
    }
}
int main()
{
int A[]={15,17,22,50,56,77,80};
printf("Enter The Number : ");
int x; scanf("%d",&x);
int pos=binarysearch(A,0,7,x);
if(pos!=-1)
{
    printf("\nThe Number %d is in index %d",x,pos);
}else{
    printf("\nNumber Not Found !");
}
    return 0;

}