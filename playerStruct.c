#include<stdio.h>
struct player{
	char pname[30],tname[30];
	float avg_runs;
};
int main(){
	struct player p[10];
	int i;
	for(i=0;i<10;i++){
		printf("\n Enter player name ,team name and  batting average : ");
		scanf("%s %s %f",&p[i].pname,&p[i].tname,&p[i].avg_runs);
	}
	printf("\n Player List : \n");
	for(i=0;i<10;i++){
		printf("......................................................\n");
		printf("\n Player Name : %s",p[i].pname);
		printf("\n Player Name : %s",p[i].tname);
		printf("\n Player Name : %f",p[i].avg_runs);
		printf("\n......................................................");
	}
	return 0;
}
