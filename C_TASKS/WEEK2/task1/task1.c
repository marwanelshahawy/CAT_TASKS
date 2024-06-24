/*Write a C code to calculate employee salary in a week based on his working hours, hour
rate is 50.
The program will ask the user to enter the working hours, then it will print his salary.
But if the working hours are less than 40 hours, a 10% deduction will be applied.*/
#include <stdio.h>
int main()
{
    int n,result;
    printf("Enter the working hours per week : ");
    scanf("%d",&n);
    if (n<40)
    {
       result = 50*n-50*n*0.1;
    }
    else
    {
        result=50*n;
    }
    printf("Your salary >> %d $",result);
     
    return 0;

}