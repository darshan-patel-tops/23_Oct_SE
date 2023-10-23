#include<stdio.h>
main()
{
	float num1;
	int num2;
	
	
	printf("Enter Number 1 : ");
	scanf("%f",&num1);
	printf("Number you entered is : %f",num1);
	printf("\nEnter Number 2 : ");
	scanf("%d",&num2);
	printf("Number you entered is : %d",num2);


	printf("\nTotal is : %d",num1+num2);


	//type conversion
	// type1		type2		result
	// int			flaot		float
	// float		float		float
	// int			int			int
}