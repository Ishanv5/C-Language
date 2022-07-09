#include<stdio.h>
struct student
{
int roll;
char name[30];
struct marks
{
int p,c,m;
}mk;//Inner structure ka variable outer structure ka element maana jaata hai
};
int main()
{
struct student s1,s2;
int t1,t2;
printf("Enter roll number,name and marks of physics,chemistry and maths of student 1=");
scanf("%d%s%d%d%d",&s1.roll,&s1.name,&s1.mk.p,&s1.mk.c,&s1.mk.m);
printf("\nEnter roll number,name and marks of physics,chemistry and maths of student 2=");
scanf("%d%s%d%d%d",&s2.roll,&s2.name,&s2.mk.p,&s2.mk.c,&s2.mk.m);
t1=s1.mk.p+s1.mk.c+s1.mk.m;
t2=s2.mk.p+s2.mk.c+s2.mk.m;
if(t1>t2)
{
printf("\nName of student having highest total=%s",s1.name);
}
else
{
printf("\nName of student having highest total=%s",s2.name);
}
return 0;
}
