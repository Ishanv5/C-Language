#include<stdio.h>
int main()
{
int a[10],i,s=0;
float average;
for(i=0;i<10;i++)
{
printf("\nEnter element=");
scanf("%d",&a[i]);
}
printf("\nArray Elements are\n");
for(i=0;i<10;i++)
{
printf("\t%d",a[i]);
}
for(i=0;i<10;i++)
{
s=s+a[i];  
}
average=s/10.0;
printf("\nAVERAGE=%f",average);
return 0;
}
