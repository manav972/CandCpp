#include<stdio.h>
int main(){
char str[100];
int i=0;
printf("enter any string:");
fgets(str,sizeof(str),stdin);

while(str[i]!='\0'){
	if(str[i]>='a'&&str[i]<='z'){
		str[i]=str[i]-32;
	}else if(str[i]>='a'&&str[i]<='z'){
		str[i]=str[i]+32;
	}
	i++;
}
printf("toggle case string:%s\n",str);
}
