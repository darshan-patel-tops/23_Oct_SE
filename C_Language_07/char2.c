#include<stdio.h>
main()
{
	char name[50];
	char city[100];
	int age,marks;
	
	
	printf("Enter your name: \n");
	gets(name);
	printf("Enter your age: \n");
	scanf("%d",&age);
	printf("Enter your city: \n");
	gets(city);
	printf("Enter your marks : \n");
	scanf("%d",&marks);
	
	
	printf("Your name is : %s  \n your age is %d  and \nyour city is %s \n and marks are: %d ",name,age,city,marks);
}