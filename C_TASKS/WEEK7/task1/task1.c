/*Write a C code defines a structure for employees that contains his salary, bonus and
deductions. The program shall ask the user to enter this information for three employees
(Mohsen, Maged and Mariam). Then the program will print the total values supplied by
the finance team.*/
#include <stdio.h>
struct {
int salary,bonus,deduction;
}mohsen,maged,mariam;
int main()
{
  printf("employee : Mohsen \n");
  printf("salary : ");
  scanf("%d",&mohsen.salary);
  printf("bonus : ");
  scanf("%d",&mohsen.bonus);
  printf("deductions : ");
  scanf("%d",&mohsen.deduction);
  printf("=======================\n");
   printf("employee : Maged \n");
  printf("salary : ");
  scanf("%d",&maged.salary);
  printf("bonus : ");
  scanf("%d",&maged.bonus);
  printf("deductions : ");
  scanf("%d",&maged.deduction);
  printf("=======================\n");
   printf("employee : Mariam \n");
  printf("salary : ");
  scanf("%d",&mariam.salary);
  printf("bonus : ");
  scanf("%d",&mariam.bonus);
  printf("deductions : ");
  scanf("%d",&mariam.deduction);
  printf("=======================\n");
  printf("Mohsen >> %d $\n",mohsen.salary+mohsen.bonus-mohsen.deduction);
  printf("Maged >> %d $\n",maged.salary+maged.bonus-maged.deduction);
  printf("Mariam >> %d $\n",mariam.salary+mariam.bonus-mariam.deduction);

    return 0;

}