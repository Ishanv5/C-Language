#include<stdio.h>
#include<conio.h>
void main(){
	int n,i,j;
	char ch='A';
	printf("Enter a nos : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		for(j=1;j<=i;j++){
			printf("%c",ch);
		}
		printf("\n");
		ch++;
	}
}
