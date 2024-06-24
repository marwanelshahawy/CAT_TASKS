/*Write a C program to convert string from lowercase to uppercase string using loop.*/
#include <stdio.h>
#include <string.h>
int main()
{
  char str[12]="hello world";
   
for(int i=0;i<strlen(str);i++)
{
    if(str[i]==' ')
    continue;
    str[i]-=32;
} printf("%s",str);

    return 0;

}