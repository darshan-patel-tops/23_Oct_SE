#include<stdio.h>

main()
{
	int saman = 1;
	int cook = 0;
	int eater = 1;
	int festival = 1;
	
	
	if(festival)
	{
		if(eater)
		{
//			printf("Khane wala h");
			if(cook)
			{
				if(saman)
				{
					printf("Saman");
				}
				else
				{
					printf("No saman");
				}
//				printf("Cook");
			}
			else
			{
				printf("No Cook");
			}
		}
		else
		{
			printf("No Eater");
		}
//		printf("inside if");
	}
	else
	{
		printf("no festival");
	}
}