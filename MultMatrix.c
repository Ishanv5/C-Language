#include<stdio.h>

int main(){
	int a[10][10],b[10][10],m,n,i,j,k,mult[10][10];
	printf("Enter row and column of matrix : ");
	scanf("%d %d",&m,&n);
	printf("Enter first matrix element : \n");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter Second matrix element : \n");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			scanf("%d",&b[i][j]);
		}
	}
	printf("Multiply of matrix : \n");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			mult[i][j]=0;
			for(k=0;k<n;k++){
				mult[i][j]+=a[i][k]*b[k][j];
			}
		}
	}
	
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("%d\t",mult[i][j]);
		}
		printf("\n");
	}
	return 0;
}
