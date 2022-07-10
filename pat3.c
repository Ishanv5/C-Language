#include<stdio.h>
void main(){
	int n,i,j,s;
	printf("Enter a nos : ");
	scanf("%d",&n);
	s=n-1;
	for(i=1;i<=n;i++){
		for(j=1;j<=s;j++){
			printf(" ");
		}
		for(j=1;j<=i;j++){
			printf("*");
		}
		printf("\n");
		s--;
	}
}
