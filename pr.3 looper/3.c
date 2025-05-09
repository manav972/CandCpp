#include<stdio.h>
int main (){
	int number, count=0,lastDigit,firstDigit,ans;
	printf("enter a number:");
	scanf("%d",&number);
	
	lastDigit = number % 10;
	
	while(number > 0){
		firstDigit = number % 10;
		number = number / 10;
	}
	ans = firstDigit+lastDigit;
	printf("Fisrst Digit :- %d + Lastdigit :- %d = %d",firstDigit,lastDigit,ans);
}
