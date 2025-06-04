#include<stdio.h>
int main(){
	int num,i,factorial;
	
	printf("enter an integer");
	scanf("%d",&num);
	
	if(num<0){
		printf("factorial is not design for negative num .\n");

	}else{
		for(i=1;i<=num;i++){
			factorial *=i;
		}
		printf("factorial of %d=%llu\n",num,factorial);
	}
}
