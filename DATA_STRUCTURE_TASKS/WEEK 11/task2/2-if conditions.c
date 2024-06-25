/*Write C program to check Leap Year or not.
Hint : If year is exactly divisible by 4 and not divisible by 100, then it is leap
year. Or if year is exactly divisible by 400 then it is leap year*/
#include <stdio.h>
#include <string.h>
int main()
{
 int year; 
 printf("Enter year : ");
 scanf("%d",&year);
 if(year%4==0 && year%100!=0)
 {
    printf("\nLeap year");
 }else if(year%400==0)
 {
    printf("\nLeap year");
 }else{
    printf("\nNot leap year");
 }
}