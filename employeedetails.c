#include<stdio.h>
void display();
struct employee
{
	int empno;
	char empname[20];
	char dep[20];
	int salary;
	int age;
	double phoneno;
};
struct employee details[5];

 void main()
 {
 	int i,choice;
 	printf("\n enter the employee details ");
 	for(i=0;i<2;i++)
 	{
 		printf("\n new:");
 		printf("\n enter employee number: ");
 		scanf("%d",&details[i].empno);
 		printf("\n enter employee name: ");
 		scanf("%s",&details[i].empname);
 		printf("\n enter employee department: ");
 		scanf("%s",&details[i].dep);
 		printf("\n enter employee salary: ");
 		scanf("%d",&details[i].salary);
 		printf("\n enter employee age: ");
 		scanf("%d",&details[i].age);
 		printf("\n enter employee phone number: ");
 		scanf("%lf",&details[i].phoneno);
	 }
	 printf("\n enter 1 if you want to display employee details ");
	 scanf("%d",&choice);
	 if(choice==1)
	 display();
	 else
	 close();
 }
 
 void display()
 {
 	printf("\n\n\n NAME \t AGE \t PHONE NO. \t SALARY \t EMPLOYEE NO. \t EMPLOYEE DEPARTMENT ");
 	int i;
 	for(i=0;i<2;i++)
 	{
 		printf("\n %s \t %d \t %lf \t %d \t %d \t %s ",details[i].empname,details[i].age,details[i].phoneno,details[i].salary,details[i].empno,details[i].dep);
 	
	 }
 }
  	
