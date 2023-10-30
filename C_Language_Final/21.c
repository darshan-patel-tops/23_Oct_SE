#include<stdio.h>

main()
{
	
	
	int num[100];
	int total=0;
//	int total; it will generate a random high number
//	char name[100];
	
	int i=0;
	for(i=0;i<5;i++)
	{
		
		printf("\nEnter Number \n");
		scanf("%d",&num[i]);
		total = total + num[i];
//		printf("\n the  number is : %d",num[0]);
	}
	
	for(i=0;i<5;i++)
	{
		printf("\n the  number is : %d\n",num[i]);
	}
		printf("Total is : %d",total);
	
	
	
	
	
	
}