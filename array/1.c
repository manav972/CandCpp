#include<stdio.h>
int main ()
{

	int  i,n;
	printf("enter array elements \n");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<5;i++)
	   {
		printf("enter a[%d]=",i);
		scanf("%d",&a[i]);
	}  
	printf("\n printing elements of array\n");
	for(i=0;i<5;i++)    
	{
			printf("%d");
	}
}
	
	

