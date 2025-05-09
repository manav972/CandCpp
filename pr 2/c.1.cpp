#include<stdio.h>
int main(){
	int val;
	printf("enter your score:-");
	scanf("%d", &val);
	(val>=91 && val <=100)?
     printf("your grade is a . excellent work ! \n")
	:(val >= 81 && val <= 90 ) ? printf("your grade is b. excellent work!\n")
	:(val >= 61 && val <= 80) ? printf("your grade is c. excellent work!\n")
	:(val >= 41 && val<=60) ? printf("your grade is d. excellent work\n")
	                        : printf("fail\n");
}
