/*  Write a code that scans 3 numbers from the user and prints them in reversed order.
*/
#include <stdio.h>
int main()
{
    int x,y,z;
    printf("Enter 3 numbers >> \n");
    scanf("%d %d %d",&x,&y,&z);
    printf("\n=================\n");
    printf("%d \n%d \n%d ",z,y,x);
    return 0;

}
