#include<stdio.h>
void main(){
	int m,n,i,j,mat1[10][10],mat2[10][10],sum[10][10];
	printf("Enter row and columns : ");
	scanf("%d %d",&m,&n);
	printf("Enter First matrix element : ");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			scanf("%d",&mat1[i][j]);
		}
		printf("\n");
	}
    printf("Enter Second matrix element : ");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			scanf("%d",&mat2[i][j]);
		}
		printf("\n");
	}
		printf(" Addition : \n");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			
			sum[i][j]=mat1[i][j]+mat2[i][j];
			printf("%d ",sum[i][j]);
		}
		printf("\n");
	}
}
