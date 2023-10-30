#include<stdio.h>
main()
{
	
	
	int num[5][2];
//	float num1[5][2];
	//array stores similar type of data type in a single line
	
	int l,b;
	for(l=0;l<5;l++)
	{
		for(b=0;b<2;b++)
		{
			printf("Enter Number \n");
			scanf("%d",&num[l][b]);
		}
	}
	
	
	for(l=0;l<5;l++)
	{
		for(b=0;b<2;b++)
		{
			printf("Number is : %d \n",num[l][b]);
//			scanf("%d",num[l][b]);
		}
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
}