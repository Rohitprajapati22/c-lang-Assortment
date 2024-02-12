#include<stdio.h>

main()
{
	
	int n,i,j;
	
	printf("Enter the array's row & column size : ");
	scanf("%d",&n);
	
	int arr[n][n];
	
	printf("Enter array's elements :\n");
	
	for(i = 0;i < n; i++){
		
		for(j = 0;j < n; j++){
			printf("arr[%d][%d] = ",i,j);
			scanf("%d",&arr[i][j]);
		}
		
	}
	
	printf("\nThe transpose matrix of an array:\n");
	for(i = 0;i < n; i++){
		for(j = 0;j < n; j++){
			printf("%d ",arr[j][i]);
		}
		printf("\n");
	}
	
	
}
