#include<stdio.h>
int main(){
	int rows,cols,i,j;
	
	printf("enter the array row size:");
	scanf("%d",&rows);
	printf("enter the array colum size:");
	scanf("%d", &cols);
	
	int A[rows][cols],B[rows][cols],C[rows][cols];
	
	printf("enter the array A's elements:\n");
	for(i = 0; i < rows; i++){
	for(j = 0; j < cols; j++){
		printf("A[%d][%d]=",i,j);
		scanf("%d", &A[i][j]);
	}	
	}
printf("enter the array A's elements:\n");
	for(i = 0; i < rows; i++){
	for( j = 0; j < cols; j++){
		printf("A[%d][%d]=",i,j);
		scanf("%d", &B[i][j]);
	}	
	}printf("enter the array A's elements:\n");
	for( i = 0; i < rows; i++){
	for( j = 0; j < cols; j++){
		printf("A[%d][%d]=",i,j);
		scanf("%d", &C[i][j]);
	}
	printf("\n");	
	}
	
	
		
}








