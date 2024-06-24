/*  Write a code that takes 2 numbers and print the arithmetical, logical and bitwise
 operations
*/
#include <stdio.h>
int main()
{int x,y;
    printf("Enter two numbers >> \n");
    scanf("%d",&x);
    scanf("%d",&y);
    printf("========================\n arithmetical operation\n========================\n");
    printf("%d + %d = %d\n",x,y,x+y);
    printf("%d - %d = %d\n",x,y,x-y);
    printf("%d * %d = %d\n",x,y,x*y);
    printf("%d / %d = %d\n",x,y,x/y);
    printf("%d %% %d = %d\n",x,y,x%y);

    printf("========================\n   logical operation\n========================\n");
    printf("%d || %d = %d\n",x,y,x||y);
    printf("%d && %d = %d\n",x,y,x&&y);
    printf("!%d && %d = %d\n",x,y,!x&&y);

    printf("========================\n   bitwise operation\n========================\n");
    printf("%d | %d = %d\n",x,y,x|y);
    printf("%d & %d = %d\n",x,y,x&y);
    printf("%d ^ %d = %d\n",x,y,x^y);
    printf("%d >> 1 = %d\n",x,1,x>>1);
    printf("%d << 5 = %d\n",y,5,x<<5);

    return 0;

}