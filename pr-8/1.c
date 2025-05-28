#include<stdio.h>
int stringlength(char *str){
	int length = 0;
	while(*str != '\0'){
		length++;
		str++;
	}
	return length;
}
int main(){
	char atr[] = "hello,world!";
	int length = stringlength;
	printf("the length of the string is : %d\n",length);
}
