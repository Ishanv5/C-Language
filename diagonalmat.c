#include<stdio.h>
int main()
{
int i, j, m, n, a[10][10], Sum = 0;
printf("\n Please Enter Number of rows and columns : ");
scanf("%d %d", &m, &n);
printf("\n Please Enter the Matrix Elements \n");
for(i = 0; i < m; i++)
{
for(j = 0;j < n;j++)
{
scanf("%d", &a[i][j]);
}
}
for(i = 0; i < m; i++)
{
for(j = 0;j < n;j++)
{
if(i==j)
{
Sum = Sum + a[i][j];
}
}
}
printf("\n The Sum of Diagonal Elements of a Matrix = %d", Sum );
return 0;
}
