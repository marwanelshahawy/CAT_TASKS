/*write C Program to Make a Simple Calculator Using switch...case*/
#include <stdio.h>
#include <string.h>
int main()
{
 int a,b;
 char c; 
 printf("Enter an operator (+,-,*,/):");
 scanf("%c",&c);
 printf("\nEnter Two operand :");
 scanf("%d %d",&a,&b);
 printf("\n");
 switch (c)
 {
 case '+':
    printf("%.1f + %.1f = %.1f",(double)a,(double)b,(double)a+b);
    break;
 case '-':
    printf("%.1f - %.1f = %.1f",(double)a,(double)b,(double)a-b);
    break;
 case '*':
    printf("%.1f * %.1f = %.1f",(double)a,(double)b,(double)a*b);
    break;
 case '/':
    printf("%.1f / %.1f = %.1f",(double)a,(double)b,(double)a/b);
    break;
 
 }

}