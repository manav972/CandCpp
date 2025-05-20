#include<stdio.h>
int main(){
	char password[100];
	int i, hasletter=0,hasdigit=0,hasspecial=0,length=0;
	printf("create your password:");
	fgets(password,sizeof(password),stdin);
	for(i=0;password[i]!='\0';i++){
		char ch=password[i];
		if((ch>='a'&&ch<='z')||(ch>='a'&&ch<='z'))
		hasletter=1;
		else if(ch>='0'&&ch<='9')
		hasdigit=1;
		else if(ch !='\n'&&ch !=' ')
		hasspecial=1;
		if(ch!='\n')
		length++;
	}
	if(hasletter&&hasdigit&&hasspecial&&length>=6)
	printf("your password is strong\n");
	else
	printf("your password is not strong\n");
}
