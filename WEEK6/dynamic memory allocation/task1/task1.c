/*write a program to print the student's marks allocate the memory dynamically , 
the student can add the mark from 1 to n subjects depending on number of subjects he is in (use realloc)*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
  int *ptr=(int*)malloc(sizeof(int));
  int n;
  printf("Enter the number of subjects >> ");
  scanf("%d",&n);
   ptr=(int*)realloc(ptr,n*sizeof(int));
  for(int i=0 ; i<n;i++)
  {
    printf("Enter mark num %d >> ",i+1);
    scanf("%d",ptr+i);
  }
  printf("===================================\n");
  for(int i=0 ; i<n;i++)
  {
    printf("subject mark num %d >> %d \n",i+1,*(ptr+i));
  }


    return 0;

}