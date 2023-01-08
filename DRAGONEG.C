#include<conio.h>
#include<stdio.h>
void main()
{int gc,sc,gg,sg;
/* gc=cost of gold ,sc=cost of silver ,gg=gram of gold ,sg=gram of silver */
clrscr();
printf("cost of gold=");
scanf("%d",&gc);
printf("cost of silver=");
scanf("%d",&sc);
printf("weight of gold=");
scanf("%d",&gg);
printf("weight of silver=");
scanf("%d",&sg);
if(gc*gg>sc*sg)
printf("GOLD");
else
printf("SILVER");
getch();
}