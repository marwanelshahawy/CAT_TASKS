/*Write a program that reads a 5x5 array of integers and then prints the row sums and the
sum of the columns:
Ex:
Enter row 1 : 8 3 9 0 10
Enter row 2 : 3 5 17 1 1
Enter row 3 : 2 8 6 23 1
Enter row 4 : 15 7 3 2 9
Enter row 5 : 6 14 2 6 0

Row Totals : 30 27 40 36 28
Columns Totals : 34 37 37 32 21
*/
#include <stdio.h>
int main()
{
 int m,n,rsum=0,csum=0;
 printf("Enter number of rows >> ");
 scanf("%d",&m); 
 printf("Enter number of Columns >> ");
 scanf("%d",&n);
 int arr [m][n];
 for(int i=0;i<m;i++)
 {
     printf("Enter row %d >> \n",i+1);
    for(int j=0;j<n;j++)
    {
       scanf("%d",&arr[i][j]);

    }   
 }
 printf("Row Totals >> ");
for(int i=0;i<m;i++)
{
    for(int j=0;j<n;j++)
    {
        rsum+=arr[i][j];
    }
    printf("%d ",rsum);
    rsum=0;
}
 printf("\nColumns Totals >> ");
for(int i=0;i<m;i++)
{
    for(int j=0;j<n;j++)
    {
        csum+=arr[j][i];
    }
    printf("%d ",csum);
    csum=0;
}
    return 0;

}