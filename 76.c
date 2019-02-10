#include<stdio.h>
void main()
{
int a,i,b;
clrscr();
scanf("%d",&a);
for(i=2;i<a;i++)
{
if(a%i==0)
b=1;
}
if(b==1)
printf(" Not Prime");
else
printf(" Prime");
getch();
}
