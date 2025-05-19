#include<stdio.h>
main(){
	int i,n;
	printf("enter number. of elements");
	scanf("%d",&n);
	
	
	int a[n];
	
	for(i=0;i<n;i++){
		printf("a[%d]:-",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		if(a[i]<0){
			printf("negative number are :-%d",a[i]);
		}
	}
}
