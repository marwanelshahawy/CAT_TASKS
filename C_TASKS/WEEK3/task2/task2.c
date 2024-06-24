/*Write a C code swap two global variables through a function.*/
#include <stdio.h>
int x=10,y=20;
void swap(int x,int y)
{
    int s;
    s=x;
    x=y;
    y=s;
   printf("After swaping \n X = %d \n Y = %d",x,y);
}

int main()
{
   
   printf("Before swaping \n X = %d \n Y = %d \n",x,y);
   swap(x,y);
    return 0;

}
