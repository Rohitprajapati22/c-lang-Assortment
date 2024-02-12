#include<stdio.h>

main()
{
	int row,col,i,j;

	printf("Enter number of row :- ");
	scanf("%d",&row);

	printf("Enter number of colums :- ");
	scanf("%d",&col);

	int arr[row][col];

	for(i = 0;i < row;i++){

		for(j = 0; j < col;j++){
			printf("arr[%d][%d] = ",i,j);
			scanf("%d",&arr[i][j]);
		}

	}

	int large=arr[0][0];
	
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			if(arr[i][j]>large){
				large=arr[i][j];	
			}
			
		}
		
	}
	printf("The largest element is: %d",large);


}
