main(){
	int c1,c2,total,seat_type,n;
	printf("1. APPLE\n2. MIRAJ \n");
	printf("enter choice (1 or 2):");
	scanf("%d",&c1);
	
	if (c1==1){
		printf("welcome to apple choose your ticket preference:\n1. Recliner \n2. Normal seat:\n");
		printf("Enter choice:");
		scanf("%d",&seat_type);
		if (seat_type==1){
			printf("enter person count :");
			scanf("%d",&n);
			total=n*300;
		}
		else if(seat_type==2){
			printf("enter person count :");
			scanf("%d",&n);
			total=n*150;
		}
	}
	else if (c1==2){
		printf("welcome to miraj choose your ticket preference:\n1. Recliner \n2. Normal seat:\n");
		printf("Enter choice:");
		scanf("%d",&seat_type);
		if (seat_type==1){
			printf("enter person count :");
			scanf("%d",&n);
			total=n*350;
		}
		else if(seat_type==2){
			printf("enter person count :");
			scanf("%d",&n);
			total=n*220;
		}
	}
printf("Bill amount:%d",total);
}