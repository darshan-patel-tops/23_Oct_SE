#include<stdio.h>
#include<stdlib.h>

int recur(int a)
{
	if(a>=0)
	{	
		printf("Welcome to function %d\n",a);
		a--;
		recur(a);
	}
	else
	{
//		exit;
		exit(0);
//		break;
//		printf("Inside else"); 
	}
}

main()
{
	recur(50);
//	recur();
//	recur();
//	recur();
}