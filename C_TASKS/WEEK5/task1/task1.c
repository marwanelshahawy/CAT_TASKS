/*Write a C code defines an int initialized with 10, then print it, then define a pointer that
points to that int and change the value of the int through the pointer to be 20, then print
it again.*/
#include <stdio.h>
int main()
{
 int a=10;
 printf("Before define a pointer >> %d \n",a);
 int *p=&a;
 *p=20;
 printf("After define a pointer >> %d \n ",a);

    return 0;

}