#include<stdio.h>
void swap(int a,int b){
	int temp;
	temp=a;
	a=b;
	b=temp;
	
		printf("\n Swap in func....");
	printf("\n a : %d",a);
	printf("\n b : %d",b);
	
}
void main(){
	int a,b;
	printf("Enter two nos : ");
	scanf("%d %d",&a,&b);
	printf("\nBefore Swap....");
	printf("\n a : %d",a);
	printf("\n b : %d",b);
	swap(a,b);
	printf("\nAfter Swap....");
	printf("\n a : %d",a);
	printf("\n b : %d",b);
}
