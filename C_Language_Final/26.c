#include<stdio.h>



/*
	function name()
	{
		statement
	}
*/



/*
	There are 2 types of function
		1) User Defined
			A) With Parameter
			B) Without Parameter
		2) System Defined
			A) With Parameter
			B) Without Parameter

*/

int call()
{
	printf("Function Lecture\n");
}

void add()
{
	int a,b;
	printf("Enter A & B : \n");
	scanf("%d %d",&a,&b);
	printf("Total is %d \n",a+b);

}


void multiplication(int a,int b) // parameter
{
		printf("Total is %d",a*b);
}








int main()
{
//		printf("Function Lecture\n");

//	call();
//	call();
//	call();
//	call();
//	call();

//	add();
//	add();
//	add();
//	add();
//	add();
//	add();
//	add();

multiplication(4,2);  // arguement
}