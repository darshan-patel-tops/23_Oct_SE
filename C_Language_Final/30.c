#include<stdio.h>

int num;
// global variable is declared

//global function declared
int area()
{
	printf("\nEnter a side \n");
	scanf("%d",&num);
	printf("Area is %d",num*num*num);
} 
int number()
{
	int a;
	printf("\nEnter number a \n");
	scanf("%d",&a);
	printf("Number is a %d",a);
	area();
}




// global scope is declared
int main()
{
//	int num;
number();
area();

	printf("\nEnter a number \n");
	scanf("%d",&num);
	printf("Number is %d ",num);	
	
	
}