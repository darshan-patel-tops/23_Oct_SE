#include<stdio.h>

main()
{
	char choice;
	int total = 0;
	printf("\t\t\t\t Welcome To KBC \a \n");
	
	printf("Enter your name \n");
	char name[100];
	gets(name);
	
	printf("capital of india?\n");
	printf("a) Delhi\n");
	printf("b) Bombay\n");
	printf("c) Ahmedabad\n");
	printf("d) Rajkot\n");
	fflush(stdin);
	scanf("%c",&choice);
	
	if(choice == 'a')
	{
		total = total +1;
		printf("PM Of india\n");
		printf("a) Gandhiji \n");
		printf("b) modiji \n");
		printf("c) Yogiji \n");
		printf("d) Rahul \n");
	fflush(stdin);
		scanf("%c",&choice);
		if(choice == 'b')
		{
					total = total +1;
printf("Total is %d",total);
		}
	}
	
	
	
	
	
	
	
}