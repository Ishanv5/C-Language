#include<stdio.h>
void main(){
	int t1=0,t2=1,next,n,i;
	printf("enter a nos : ");
	scanf("%d",&n);
	printf("%d \n",t1);
	printf("%d \n",t2);
	for( i=3;i<=n;i++){
		next=t1+t2;
		t1=t2;
		t2=next;
		printf("%d \n",next);	}
}
