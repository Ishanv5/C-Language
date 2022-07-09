#include<stdio.h>
struct book{
	char title[30],author[30];
	float price;
};
void main(){
	struct book b[5];
	int i,j,t;
	for(i=0;i<5;i++){
		printf("\n Enter book title,author and price : ");
		scanf("%s %s %f",&b[i].title,&b[i].author,&b[i].price);
	}
	for(i=1;i<5;i++){
		for(j=0;j<5;j++){
			if((b[j].price)>(b[j+1].price)){
				t=b[j];
				b[j]=b=[j+1];
				b[j+1]=t;
			}
		}
	}
	printf("\n Sorted List : \n");
	for(i=0;i<5;i++){
		printf("\n");
		printf("\n Title : %s",b[i].title);
		printf("\n Author : %s",b[i].author);
		printf("\n Price : %f",b[i].price);
		
	}
	
}
