#include<stdio.h>

struct student{
	char name[50];
	int rollno;
	float marks;
};
int main(){
    int i;
	struct student students[3];
	
	for(i=0;i<3;i++){
		printf("enter details for student %d:\n",i+1);
		
		printf("name:");
		scanf("%s",students[i].name);
		
		printf("rollno :");
		scanf("%d", &students[i].rollno);
		
		printf("marks:");
		scanf("%f", &students[i].marks);
		printf("\n");
	}
	printf("student records:\n");
	for(i=0;i<3;i++){
		printf("student %d:\n",i+1);
		printf("name: %s\n",students[i].name);
		printf("rollno:%d\n",students[i].rollno);
		printf("marks:%.2f\n",students[i].marks);
		printf("\n");
	}
}
