/*Write a C program to find reverse of a given string using loop. How to find reverse of any given string using loop in C programming.*/
#include <stdio.h>
#include <string.h>
int main()
{
    char str1[12]="hello world";
    char str2[12];
    for(int i=0;i<strlen(str1);i++)
    {
        str2[i]=str1[strlen(str1)-i-1];
    }
    printf("the string before reverse >> %s\n",str1);   
    printf("the string after reverse >> %s",str2);

    return 0;

}