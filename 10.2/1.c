#include<stdio.h>
int main(){
	int row,cols;
	int a=3,b=3,i,j;
	int array[3][3];
	int sum = 0,count = 0;
	
	printf("enter the array rows & column size: 3\n");
	printf("enter the array's elements");
	
  for(i=0;i<rows;i++){
	for( j=0;j<cols;j++){
		printf("a[%d][%d]=",i,j);
		scanf("%d", & array[i][j]);
		sum +=array[i][j];
		count++;
	}	
	}
	float average = (float)sum/count;
	printf("\n average of an array : %.2f\n",average);
	
}
