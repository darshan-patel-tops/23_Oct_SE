#include<stdio.h>

main()
{
	int marks;
	
	printf("Enter your marks : \n");
	scanf("%d",&marks);
	
	if(marks>= 0 && marks<=100 )
	{
			if(marks>= 0 && marks<=32 )
			{
				printf("Fail");
			}
			else if(marks>=33 && marks<=50)
			{
				printf("third class");
			}
			else if(marks>=51 && marks<= 80)
			{
				printf("Second class");
			}
			else if(marks>=81 && marks<=100)
			{
				printf("First class");
			}
			else
			{
				printf("Invalid marks");
			}
//		printf("inside if");
	}
	else
	{
		printf("inside else");
	}
	
	
}