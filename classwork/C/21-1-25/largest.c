main(){
	
	int a[5]={5,6,1,2,3},temp,i,j;
	
	printf("Array a:\n");
	
	for(i=0;i<5;i++){
		printf(" %d ",a[i]);
	}
	
	for(i=0;i<5;i++){
		temp=0;
		for(j=0;j<i;j++){
				if (a[i]<a[j]){
					temp=a[i];
					a[i]=a[j];
					a[j]=temp;
				}
		}
	}		
	printf("\n");
	printf("Array a(sorted):\n");
	
	for(i=0;i<5;i++){
		printf(" %d ",a[i]);
	}
	printf("\n");
	printf("Largest:%d\n",a[4]);
	printf("2nd Largest:%d\n",a[3]);
	printf("Smallest:%d",a[0]);
		
}