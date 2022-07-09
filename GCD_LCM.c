#include<stdio.h>
int GCD(int a,int b){
	if(b>a){
		return GCD(b,a);
	}
	else if(b==0){
		return a;
	}
	else{
		return GCD(b,a%b);
	}
}
void main(){
	int a,b,g,l;
	printf("Enter 2 nos : ");
	scanf("%d %d",&a,&b);
	g=GCD(a,b);
	printf("\n GCD : %d",g);
	l=(a*b)/g;
	printf("\n LCM : %d",l);
}
