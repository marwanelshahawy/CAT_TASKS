/*Write a C code that gets the number of the digits in a given number.*/
#include <stdio.h>
void Get_Number(int x)
{
    int count=0;
    while(x!=0)
    {
        x/=10;
        count++;

    }
    printf("the number of the digits is >> %d",count);
}

int main()
{
    int x;
   printf("Enter the number >> ");
   scanf(" %d", &x);
   Get_Number(x);

    return 0;

}
