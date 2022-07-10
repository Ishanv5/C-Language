#include<stdio.h>
void main(){
	int a[30],n,i,s=0;
	float avg;
	printf("Enter a nos : ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("Enter an element : ");
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		s=s+a[i];
	}
	printf("\nSum : %d",s);
	avg=s/n;
	printf("\nAverage : %f",avg);
}
