/*Write a C code to ask the user to enter two numbers, then the main function will call a
function named Get_Max that takes the two values entered by the user then returns the
maximum of them.
The main function will print the returned value.*/
#include <stdio.h>
int Get_Max(int,int);
int main()
{
   int x,y;
   printf("Enter Two numbers >> \n");
   scanf("%d %d", &x, &y);
   printf("The max number is >> %d",Get_Max(x,y));
    return 0;

}
int Get_Max(int x,int y)
{
    if(x>y)return x;
    else return y;
}