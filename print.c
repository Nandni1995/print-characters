#include<stdio.h>
#include<conio.h>
void main()
{
char a[50];
int b,i,t,c[20]={0};
clrscr();
printf("Enter the string:");
scanf("%s",a);
b=strlen(a);
for(i=b-1;i>0;i--)
{
if(a[i]!=a[i-1])
{
t=a[i]%97;
if(c[t]==0)
{
printf("%s",a[i]);
c[t]=1;
}
}
}
getch();
}
