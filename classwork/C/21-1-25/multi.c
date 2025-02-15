main(){
	
	int a[3][3]={{1,1,1},{1,1,1},{1,1,1}},b[3][3]={{1,1,1},{1,1,1},{1,1,1}},i,j,k,sum,c[3][3];
	
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			sum=0;
			for (k=0;k<3;k++){
				sum+=a[i][k]*b[k][j];
			}
			c[i][j]=sum;
//			printf("%d",sum);
		}
	}		
	
	printf("Array a:\n");
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
		printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	printf("Array b:\n");
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
		printf("%d ",b[i][j]);
		}
		printf("\n");
	}
	printf("multiplication:\n");
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
		printf("%d ",c[i][j]);
		}
		printf("\n");
	}
}