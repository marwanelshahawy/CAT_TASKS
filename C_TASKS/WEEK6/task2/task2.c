/*Write a C program to count total 
number of alphabets, digits or special characters in a string using loop.*/
#include <stdio.h>
#include <string.h>
int main()
{
    char str[15]="marWan26!@";
    int alp=0,dig=0,spl=0;
    for(int i=0;i<strlen(str);i++)
    {
        if(str[i]>='a'&&str[i]<='z'||str[i]>='A'&&str[i]<='Z')
        {
            alp++;
        }else if(str[i]>='0'&&str[i]<='9')
        {
            dig++;
        }else
        {
            spl++;
        }
    }
    printf("number of alphabets >> %d \nnumber of digits >> %d \nnumber of special characters  >> %d",alp,dig,spl);
  
    return 0;

}