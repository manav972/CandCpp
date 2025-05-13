#include<stdio.h>
int main(){
	int i,j,row=5,space;
	for(i=5;i >= 1; i--)
	printf(" ");
	for(j=1;j<=i;j++){
		printf("%d", j % 2);
	}
	printf("\n");
}
