#include<stdio.h>
main(){
	int r,c,i,j;
	printf("enter the number of row:-");
	scanf("%d",&r);
	printf("enter the number of colums:-");
	scanf("%d",&c);
	
	int a[r][c];
	int m=a[r][c];
	
	printf("enter the elements os the array:-\n");
	for(i=0;i<r;i++){
	for(j=0;j<
	c;j++){
		printf("elements[%d][%d]:-",i,j);
		scanf("%d",&a[i][j]);
	}	
	}
	for(i=0;i<r;i++){
	for(j=0;j<c;j++){
	if(a[i][j]>m){
		m=a[i][j];
	}	
	}	
	}
	printf("the largest elements is :-%d",m);
}
