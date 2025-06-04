#include<stdio.h>

int reversenumber(int num){
	int rev = 0;
	while(num>0){
		rev=rev*10+(num%10);
		num/=10;
	}
	return rev;
}
int main(){
	int num;
	printf("enter a 3-digit number:");
	scanf("%d",&num);
	
	if(num>=100&&num<=999){
		printf("reversed number is :%d\n",reversenumber(num));
		
	}
	else
	{
	printf("not a 3-digit number.\n");
}
}
