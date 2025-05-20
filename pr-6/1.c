#include<stdio.h>
#include<string.h>
int main(){
	char str[20];
	int i, len, flag=0;
	printf("enter any string:");
	scanf("%s",str);
	
	len=strlen(str);
	for(i=0;i<len/2;i++){
		if(str[i] !=str[len - i - 1]){
			flag = 1;
			break;
		}
	}
	if(flag){
		printf("the given string is nota palindrome.\n");
	}else{
		("the given string is palindrome.\n");
	}
}
