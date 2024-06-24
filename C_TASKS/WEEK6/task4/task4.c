/*-Write a C program to input any string from user and find the first occurrence of a given character in the string. 
Example:-
Input string: I love Codeforwin.
Input character to search: o
Output
'o' is found at index 3
*/
#include <stdio.h>
#include <string.h>
int main()
{
    char str[100],search;
    printf("Input string: ");
    fgets(str, sizeof(str), stdin); // I don't know how to input the string so i search how to input using fgets '_'.
    printf("Input character to search: ");
    scanf("%c",&search);
    for(int i=0;i<strlen(str);i++)
    {
        if(str[i]==search)
        {
            printf("%c is found at index %d",search,i);
            break;
        }
    }
    return 0;

}