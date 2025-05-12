#include<stdio.h>
int main (){
 int size, sum=0
 avg =0;
printf("enter the array size =");
scanf("%d"& size);
int arr [5];

printf("enter the array elements : ");
for(i=0;i<5;i++) {
	scanf("%d",&arr[i]);
	sum=sum+arr[i];
}
avg=(float)sum/size;
printf("\n the sum of array elements =%d\n",sum);
printf("\n the average of array element= %.2f\n",avg)
}
