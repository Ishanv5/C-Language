#include<stdio.h>
int fact(int n){
	if(n==0){
	
	return 1;}
	else{
	
	return (n*fact(n-1));
}
	}
void main(){
	int n,f;
	printf("Enter a nos : ");
	scanf("%d",&n);
	f=fact(n);
	printf("Factorial : %d ",f);
}
