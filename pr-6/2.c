#include<stdio.h>
int main(){
	char str[100];
	int freq[26]={0};
	int i;
	printf("enter a string:");
	fgets(str,sizeof(str),stdin);
	
	for(i=0;str[i]!='0';i++){
		char ch=str[i];
		
		if(ch>='a'&&ch<='z')
		ch=ch+32;
		
		if(ch>='a'&& ch<='z')
		freq[ch-'a']++;
	}
	for(i=0;i<26;i++){
		if(freq[i]>0){
			printf("%c => %d\n",i + 'a',freq[i]);
		}
	}
}
