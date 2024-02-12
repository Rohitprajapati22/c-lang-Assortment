#include<stdio.h>

main()
{
	int row,col,i,j;
	int sum = 0,m=0;
	
	printf("Enter the array's row size :");
	scanf("%d",&row);
	
	printf("Enter the array's column size :");
	scanf("%d",&col);
	
	int arr[row][col];
	
	printf("Enter array's elements :\n");
	
	for(i = 0;i < row; i++){
		for(j = 0;j < col; j++){
			printf("arr[%d][%d] = ",i,j);
			scanf("%d",&arr[i][j]);
		}
	}
	
	
	int a,b;
	
	printf("Enter row number: ");
	scanf("%d",&a);
	
	printf("Elements of row %d :",a);

		for(j = 0;j < col; j++){
			printf("%d",arr[a][j]);
			if(j < col-1)
				 printf(", ");
				 sum +=arr[a][j];
				 
		}
			printf("\nThe sum of row %d: %d\n",a,sum);	
	
	
	
	

	printf("\nEnter col number: ");
	scanf("%d",&b);
	
	printf("\nElements of col %d :",b);
	for(i = 0;i < row; i++){
			
			printf("%d",arr[i][b]);
			if(i < row-1)
				 printf(", ");
				 m +=arr[i][b];
		
	}
			printf("\nThe sum of col %d : %d\n",b,m);	
	
	
	
	
	
}
