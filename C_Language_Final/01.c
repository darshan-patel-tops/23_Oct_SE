#include<stdio.h>

// pre processor
// include is a key word to include anything
// standard input output for stdio  it is our library
// .h is a header file


main()
{
	// Rules of variable 
		// 1 it cannot start with a number
		// 2 it can have number in between
		// 3 it is case sensitive
		// 4 you cannot use any special character except _ underscore
		// 5 you cannot use space
		
	char name[50],city[50]; 
	int age;
	float marks;
	
	
	
	printf("Enter your name\n");
	gets(name);
//	scanf("%c",&name);
	printf("\nYour name is %s ",name);
	
	printf("\nEnter your age : \n");
	scanf("%d",&age);
	printf("Your age is : %d",age);
	
//	fflush(stdin);
	printf("\nEnter your marks : \n");
	scanf("%f",&marks);
	printf("Your marks are : %f",marks);
	
	
	fflush(stdin);
	printf("\nEnter your city\n");
	gets(city);
	printf("Your city is : %s",city);
}