#include<stdio.h>

main()
{
	char week;
	scanf("%c",&week);
	switch(week)
	{
		
		case 'm':
			printf("Monday");
			break;
		case 't':
			printf("Tuesday");
			break;
		case 'w':
			printf("Wednesday");
			break;
		case 'T':
			printf("Thursday");
			break;
		case 'f':
			printf("Friday");
			break;
		case 's':
			printf("Saturday");
			break;
		case 'S':
			printf("Sunday");
			break;
		default :
			printf("Enter valid choice");
		}	
	
	
	
	
	
	
	
	
}