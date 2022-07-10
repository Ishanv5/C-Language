#include<stdio.h>
struct student
{
int rno;
char name[30];
float fees;
};
int main()
{
struct student s[10];
int i;
for(i=0;i<=9;i++)
{
printf("\nEnter Rol no Name and Fees=");
scanf("%d%s%f",&s[i].rno,&s[i].name,&s[i].fees);
}
for(i=0;i<=9;i++)
{
printf("Rollno=%d Name=%sfees=%f\n",s[i].rno,s[i].name,s[i].fees);
}
return 0;
}
