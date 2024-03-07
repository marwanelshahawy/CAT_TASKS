/*Find out maximum and minimum from an array using 
dynamic memory allocation*/
#include <stdio.h>
#include <stdlib.h>
int main()
{ 
  int *ptr=(int*)malloc(sizeof(int));
  int n,maxi,mini;
  printf("Enter the size of array >> ");
  scanf("%d",&n);
   ptr=(int*)realloc(ptr,n*sizeof(int));
  for(int i=0 ; i<n;i++)
  {
    printf("Enter number %d >> ",i+1);
    scanf("%d",ptr+i);
  }
   printf("===================================\n");
   maxi=mini=*ptr;
  for(int i=1 ; i<n;i++)
  {
    
    if(*(ptr+i)>maxi)
    {
        maxi=*(ptr+i);
    }
    if(*(ptr+i)<mini)
    {
        mini=*(ptr+i);
    }

  }
  printf("The maximum num is >> %d \nThe minimum number is >> %d",maxi,mini);
  
    return 0;

}