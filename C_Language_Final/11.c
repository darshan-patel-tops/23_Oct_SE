#include<stdio.h>

main()
{
	int marks;
//	float marks;
	
	printf("Enter marks\n");
	scanf("%d",&marks);
	
	if(marks<0 || marks>100)
	{
		printf("Enter valid marks");
	}
	else
	{
		
	
	switch(marks/10)
	{
		case 10:
		case 9:
			printf("A++\n");
			break;
		case 8:
		case 7:
			printf("A+\n");
			break;
		case 6:
		case 5:
		case 4:
			printf("A");
			break;
		default :
			printf("Fail");
			break;
	}
}
}