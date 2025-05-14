#include<stdio.h>
main(){
	int r,c,i,sum=0,j;
	float x;
	 
	 printf("enter the number. row:-");
	 scanf("%d",&r);
	 printf("enter the number. of colum:-");
	 scanf("%d",&c);
	 
	 int a[r][c];
	 
	 for(i=0;i<r;i++){
	 	for(j=0;j<c;j++){
	 	printf("a[%d][%d]:-",i,j);
	 	scanf("%d",&a[i][j]);
	 	
	 }
     }
     for(i=0;i<r;i++){
     	for(j=0;j<c;j++){
     	if(i==0||j==0||j==c){
     		printf("%d\n",a[i][j]);
     		sum+=a[i][j];
		 }
	}
	 }
	 printf("the sum of diagonalelements is :- %d",sum );
     
     

}
