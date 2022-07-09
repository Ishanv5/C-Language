#include<stdio.h>
void main(){
	int a[10][10],b[10][10],m,n,i,j;
	printf("Enter row and column : ");
	scanf("%d %d ",&m,&n);
	printf("Enter First matrix element : ");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}
		
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			b[j][i]=a[i][j];
		}
	}
	printf("\n Transpose matrix : \n");
		
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf(" %d ",b[i][j]);
		}
		printf("\n");
	}
	
}
