#include<stdio.h>
int main (){
	int number, count=0;
	printf("enter a number:");
	scanf("%d",&number);
	
	while(number > 0){
		count++;
		number = number / 10;
	}
	
	printf("Sum :- %d",count);
}
