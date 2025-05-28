#include<stdio.h>
int main(){
	int row,cols,i,j;
	
	printf("enter the number of rows:");
	scanf("%d",&row);
	printf("enter the number of colums:");
	scanf("%d",&cols);
	
	int arr[row][cols];
	
	printf("enter the elements of array:\n");
	for(i=0;i<row;i++){
		for(j=0;j<cols;j++){
			scanf("%d", &arr[i][j]);
		}
	}
	printf("the array with cubes of elements:\n");
	for(i=0;i<row;i++){
		for(j=0;j<cols;j++){
			scanf("%d", &arr[i][j]);
		}
		printf("\n");
	}
	
}
