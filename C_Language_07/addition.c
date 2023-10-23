#include<stdio.h>

main()
{
//	int num1,num2;
	int num1;
	int num2;

	printf("Enter number 1 \n");
	scanf("%d",&num1);
	printf("Enter number 2 \n");
	scanf("%d",&num2);
	printf("Num 1 is : %d      Num 2 is : %d",num1,num2);
	printf("\nTotal is : %d",num1+num2);
	printf("\nTotal is : %d",num1-num2);
	printf("\nTotal is : %d",num1*num2);
	printf("\nTotal is : %d",num1/num2);
	printf("\nTotal is : %d",num1%num2);
}