#include<stdio.h>
int main (){
	int choice;
	float num1,num2,result;
	while(1){
		printf("\n calculator menu:\n");
		printf("1.add\n");
		printf("2.subtract\n");
		printf("3.multiply\n");
		printf("4.divide\n");
		printf("5.modulus\n");
		printf("0.exit\n");
		printf("enter your choice:");
		scanf("%d",&choice);
		
		switch(choice){
			case 1:
				printf("enter the first number:");
				scanf("%f",&num1);
				printf("enter the second number:");
				scanf("%f",&num2);
				printf("Addition = %f",num1+num2);
				break;
				
				case 2:
				printf("enter the first number:");
				scanf("%f",&num1);
				printf("enter the second number:");
				scanf("%f",&num2);
				printf("Subtraction = %f",num1-num2);
				break;
				
				case 3:
				printf("enter the first number:");
				scanf("%f",&num1);
				printf("enter the second number:");
				scanf("%f",&num2);
				printf("Multiplay = %f",num1*num2);
				break;
				
				case 4:
				printf("enter the first number:");
				scanf("%f",&num1);
				printf("enter the second number:");
				scanf("%f",&num2);
				printf("Divide = %f",num1/num2);
				break;
				
//				case 5:
//				printf("enter the first number:");
//				scanf("%f",&num1);
//				printf("enter the second number:");
//				scanf("%f",&num2);
//				printf("Modulo = %f",num1 % num2);
//				break;
				
				case 0:
					printf("exiting the program...\n");
					break;
					
					default:
					printf("invalid choice. please try again.\n");
				     break;
				
		}
	}
}
