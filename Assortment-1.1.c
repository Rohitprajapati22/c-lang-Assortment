#include<stdio.h>

main()
{
	
	int i,j,n;
	
	printf("Enter the array's size:- ");
	scanf("%d",&n);
	
	int arr[n];
	
	for(i = 0; i < n ;i++){
		printf("arr[%d] = ",i);
		scanf("%d",&arr[i]);
		
	}
	printf("\nNegative elements from an Array :");
	for(i = 0; i < n ;i++){
		if(arr[i] <= 0){
			printf("%d,",arr[i]);
		}
	}
	
	
}
