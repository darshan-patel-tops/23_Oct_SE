#include<stdio.h>

main()
{
	
	
	/* if (condition)
		{
			perform
		}
		else
		{
			perform
		}
		
	*/
	
	/*
		if(condition)
		{
			perform
		}
		else if(condition)
		{
			perform
		}
		else
		{
			perform
		}
	
	*/
	/*
		if(condition)
		{
			perform
			if(condition)
			{
				perform
				
				if(condition)
				{
				}
			}
		}
	
	*/
	
	
	
	/*
					AND
					
		condition1	condition2	result
		true		true		true
		true		false		false
		false		true		false
		false		false		false
	
	
	
	
	
	
	
	
	
	
	
	*/
	
	
	
	
	
	
	
	
	
	int marks;
	printf("Enter your marks \n");
	scanf("%d",&marks);
	
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
	
	
	
	
	
	
}