#include<stdio.h>


int batsman()
{
	
//		printf("welcome to batsman function\n");
	
}



int cricket()
{
	char name[100];
	int age,choice;
	
	printf("Welcome to Cricket Academy \n");
	
	printf("Enter your name\n");
	gets(name);
	

	printf("Enter your age \n");
	scanf("%d",&age);

	printf("Welcome %s your age is %d",name,age);
	
	
	printf("What is your role \n");
	
	printf("1) Batsman\n2) Bowler\n3) All-Rounder");
	printf("\nEnter your choice \n");
	
	scanf("%d",&choice);	

	if(choice == 1)
	{
		batsman();
	}
	else if(choice == 2)
	{
//		bowler();
	}
	else if(choice == 3)
	{
//		allrounder();
	}
	else
	{
		printf("Enter Valid choice");
	}
	
}


main()
{
	cricket();			
}











