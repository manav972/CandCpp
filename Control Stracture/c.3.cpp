#include<stdio.h>
main(){
	int p,c,m;
	float avg;
	printf("enter marks of physics:-");
	scanf("%d",&p);
	printf("enter marks of chemistry :-");
	scanf("%d",&c);
	printf("enter marks of maths:-");
	scanf("%d",&m);
	avg=(p+c+m)/3;
	printf("%f",avg);
}
