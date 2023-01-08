#include<conio.h>
void main()
{int num,rev=0,a,b;
clrscr();
printf("enter number");
scanf("%d",&num);
a=num;
while(num)
{
a=num%10;
rev=rev*10+a;
num=num/10;
}
printf("reversed number is:%d\n",rev);
if(num==rev)
printf("number is palindrome");
else
printf("number is not palindrome");
getch();
}