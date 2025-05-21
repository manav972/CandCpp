#include<stdio.h>
int stringlength(char str[]){
	int length = 0;
	
	while (str[length]!='\0'){
		length++;
	}
	return length;
}
int main(){
	char inputstring[100];
	printf("enter any string:");
	scanf("%s",inputstring);
	
	int stringlengthresult = stringlength(inputstring);
	printf("length is %d\n",stringlengthresult);
}
