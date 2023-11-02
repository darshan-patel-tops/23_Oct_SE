#include<stdio.h>


int recur(int a)
{
		if(a>0)
		{
			printf("%d\n",a);
			a--;
			recur(a);
		}
}

main()
{
//	int a;
//	scanf("%d",&a);
//	
//	recur(a);
	
//	for(int i=0;i<5;i++)
//	{
//		printf(" %d \n",i);
//		
//	}
	
//	int marks[][];	







int a;

printf("How many times a loop should run \n");
scanf("%d",&a);

		for(int i=0;i<=a;i++)
		{
			printf("%d\n",i);
		}










}