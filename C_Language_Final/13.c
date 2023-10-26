#include<stdio.h>


main()
{
	
	
	/*
	BODMAS
	bracket open
	division
	multiplication
	addition
	substraction
	
	
	
	
	
	
	*/
	
	char name[100];
	float marks;
	float total=0;
	printf("enter your name \n");
	gets(name);
	
	printf("Enter your marks : \n");
	scanf("%f",&marks);
	total = total + marks;
	scanf("%f",&marks);
	total = total + marks;
	scanf("%f",&marks);
	total = total + marks;
	scanf("%f",&marks);
	total = total + marks;
	scanf("%f",&marks);
	total = total + marks;
	
	printf("Total is %f\n",total);
	float percentage;
	percentage = (total * 5) / 100;
	printf("Grade is %f\n",percentage);
	
	
	
	
	
	
	
}