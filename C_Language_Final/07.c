#include<stdio.h>

main()
{
	int age;
	
	
	printf("Enter your age : \n");
	scanf("%d",&age);
	
	
	if(age>=0 && age<=10)
	{
		printf("You can drink water");
	}
	else if(age>=11 && age<=18)
	{
		printf("You can drink water with chai");
	}
	else if(age>=19 && age<=25)
	{
		printf("You can drink water with alchohol");
	}
	else if(age>=26 && age<=50)
	{
		printf("you can drink water with expensive whiskey");
	}
	else if(age>=51)
	{
		printf("You can drink ganga jal");
	}
	else
	{
		printf("Enter Valid age");
	}
	
	
}