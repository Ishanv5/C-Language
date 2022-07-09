#include<stdio.h>
void main(){
	int i,n,c=0;
	printf("Enter a nos : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		if(n%i==0){
			c++;
		}
	}
	if(c==2){
		printf("It is Prime  nos ..... ");
	}
	else{
		printf("It is not a Prime nos ....");
	}
}
