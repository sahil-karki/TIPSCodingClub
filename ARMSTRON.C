#include<stdio.h>
#include<conio.h>
void main()
{int num,sum=0,a,b;
clrscr();
printf("enter a number");
scanf("%d",&num);
b=num;
while(num)
{
a=num%10;
sum=sum+(a*a*a);
num=num/10;
}
if(b==sum)
printf("it is a armstrong number");
else
printf("it is not armstrong number");
getch();
}
