/*Write a C code that asks the user to enter 3 numbers, the program will print the
maximum number of them.*/
#include <stdio.h>
int main()
{
   int x,y,z,max=0;
   printf("Enter Three numbers >> \n");
   scanf(" %d %d %d", &x, &y, &z);
   int arr[3]={x,y,z};
   for(int i=0;i<3;i++)
   {
    if(arr[i] > max)
    {
        max = arr[i];
    }
   } 
   printf("The maximum number is %d",max);
    return 0;

}