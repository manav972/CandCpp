#include<stdio.h>
int main(){
	int i,sum=0;
	
	while(i<=10){
		printf("%d",i);
		i++;
		sum = sum+i;
	}printf("%d", sum);
}
