#include<stdio.h>
int main()
{
int a[100],n,i,min;
printf("Enter number of elements=");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("\nEnter element=");
scanf("%d",&a[i]);
}
min=a[0];
for(i=1;i<n;i++)
{
if(min>a[i])
{
min=a[i];
}
}
printf("\nSmallest Number=%d",min);
return 0;
}
