#include<stdio.h>
main(){
	
	int r,c,i,j;
	printf("enter number of row:-");
	scanf("%d",&r);
	printf("enter number of colums:-");
	scanf("%d",&c);
	
	int a[r][c],rn,cn,rs,cs;
	printf("enter the elements of the array:\n");
	for(i=0;i<r;i++){
	for(j=0;j<c;j++){
		printf("a[%d][%d]:-",i,j);
		scanf("%d",&a[i][j]);
	}
		}
		printf("enter number of row:-");
		scanf("%d",&rn);
		printf("enter number of colum:-");
		scanf("%d",&cn);
		
		if(rn<0 || rn>=r || cn<0 || cn>=c ){
			printf("invalid input");
			
		}
		else{
			for(j=0;j<c;j++){
				rs +=a[rn][j];
				
			}
			for(i=0;i<c;j++){
			cs+=a[cn][i];
		}
		printf("\nelements of row%d:",rn,j);
		printf("\n sum of elements in row%d:-%d",rn,rs);
		printf("\nelements of row:%d",cn,i);
		printf("\nsum of elements in colums %d:%d",cn,cs);
		}
		
	}

