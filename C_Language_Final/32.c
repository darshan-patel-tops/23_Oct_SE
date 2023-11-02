#include<stdio.h>
main()
{
	
	
	int a,b;
	
	printf("Enter 2 numbers \n");
	scanf("%d %d",&a,&b);
	
	
	int marks[a][b];
	
	for(int i=0;i<a;i++)
	{
		for(int j=0;j<b;j++)
		{
			printf("Enter Number [%d][%d] at index \n",i,j);
			scanf("%d",&marks[i][j]);
		}
	}
	
	for(int i=0;i<a;i++)
	{
		for(int j=0;j<b;j++)
		{
			printf("Enter Number [%d][%d] at index value is %d \n",i,j,marks[i][j]);
//			scanf("%d",marks[i][j]);
		}
	}
	
	
//	for()
	
	
	
	
	
	
	
	
}