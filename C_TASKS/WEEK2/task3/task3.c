/*Write a C code that asks the user to enter his ID and then the program will print his
name.
Available IDs are: (1234 -> Harry), (5678 -> Ron), (1145 -> Hermione)
Any other number, the program will print "Wrong ID".*/
#include <stdio.h>
int main()
{
   int n;
   printf("Enter your ID >> ");
   scanf(" %d",&n);
   switch (n)
   {
   case 1234 :
    printf("Welcome Harry");
    break;
    case 5678 :
    printf("Welcome Ron");
    break;
   case 1145 :
    printf("Welcome Hermione");
    break;
   default:
    printf("Wrong ID ");
    break;
   }
    return 0;

}