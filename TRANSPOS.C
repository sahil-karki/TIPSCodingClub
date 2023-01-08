#include<conio.h>
#include<stdio.h>
void main()
{
int a[3][2],t[3][2],i,j;
clrscr();
printf("enter matrix of 2 by 2");
for(i=0;i<3;i++)
  { for(j=0;j<2;j++)
       scanf("%d",&a[i][j]);

   }
for(i=0;i<3;i++)
{  for(j=0;j<2;j++)
      t[i][j]=a[j][i];
 }
printf("the transposed matrix:");
for(i=0;i<3;i++)
{  for(j=0;j<2;j++)
      printf("%d\t",t[i][j]);

   printf("\n");
}
getch();
}
