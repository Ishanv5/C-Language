#include<stdio.h>
int main()
{
int a[10][10],b[10][10];
int m,n,i,j;
printf("Enter number of rows and columns of matrix=");
scanf("%d%d",&m,&n);
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
printf("\nEnter Number=");
scanf("%d",&a[i][j]);
}
}
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
b[j][i]=a[i][j];
}
}
printf("\nTranspose Matrix=\n");
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
printf("%d ",b[i][j]);
}
printf("\n");
}
return 0;
}

