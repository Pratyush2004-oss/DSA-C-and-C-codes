#include<stdio.h>
#include<string.h>
int main(){
	int a = 10;
	struct student{
		char name[100];
		float marks;
		
	};
	struct student s1, s2, s3;
	printf("%d",sizeof(s1));
	
	strcpy(s1.name, "Pratyush");
	s1.marks = 87.8;
	
	strcpy(s2.name, "Dean");
	s2.marks = 98.70;
	
	printf("\n %s %f", s1.name,s1.marks);
	printf("\n %s %.2f", s2.name,s2.marks);
	printf("\n%x",&s1);
	printf("\n%x",&s1.name);
	printf("\n%x",&s1.marks);
	
	printf("\n \n****************************************\n");
	
	printf("\n%x",&s2);
	printf("\n%x",&s2.name);	
	printf("\n%x",&s2.marks);
	
	
	
	return 0;
}


