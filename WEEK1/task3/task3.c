/* Write a program that asks the user to enter a dollars and cents amount, then display the
 amount with 5% tax added:
 INPUT: Enter an amount: 100.00
 OUTPUT: With tax added : $ 105.00
*/
#include <stdio.h>
int main()
{
float money;
printf("Enter the Money you have : ");
scanf("%f",&money);
float tax=money*.05;
printf("The money with tax = %.2f",money+tax);
    return 0;

}