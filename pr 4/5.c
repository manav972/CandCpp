#include<stdio.h>
int main(){
	int i,j,space,row=5;
	for (i=1;i<=row;i++){
		for(space=1;space<=row-i;space++){
			printf("");
		}
		for(j=1;j<1;j--){
			printf("%d", j);
		}
		for(j=1;j<=i;j++){
			printf("%d", j);
		}
		
		printf("\n");
	}
}
