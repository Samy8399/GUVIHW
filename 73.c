#include<stdio.h>
void main()
{
int a[25],b,i,j;
clrscr();
scanf("%d",&b);
for(i=0;i<b;i++)
 scanf("%d",&a[i]);
j=a[0];
for(i=0;i<b;i++)
 {
  if(a[i]<j)
   j=a[i];
  }
printf("\n%d",j);
getch();
}
