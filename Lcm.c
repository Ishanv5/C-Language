#include<stdio.h>
int GCD(int m,int n)
{
if(n>m)
{
return GCD(n,m);
}
else if(n==0)
{
return m;
}
else
{
return GCD(n,m%n);
}
}
int main()
{
int a,b,g,l;
printf("Enter 2 numbers=");
scanf("%d%d",&a,&b);
g=GCD(a,b);
l=(a*b)/g;
printf("\nLCM=%d",l);
return 0;
}
