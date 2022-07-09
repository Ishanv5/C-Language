#include<stdio.h>
struct player
{
char pname[30],tname[30];
float average;
};
int main()
{
struct player p[10];
int i,j;
for(i=0;i<10;i++)
{
printf("\nEnter player name, team name and batting average=");
scanf("%s%s%f",&p[i].pname,&p[i].tname,&p[i].average);
}
printf("\nPlayer List=\n");
for(i=0;i<10;i++)
{
printf("\n");
printf("\nPlayer Name=%s",p[i].pname);
printf("\nTeam Name=%s",p[i].tname);
printf("\nBatting Average=%f",p[i].average);
}
return 0;
}
