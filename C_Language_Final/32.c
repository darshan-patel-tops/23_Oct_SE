#include<stdio.h>
main()
{
	
	
	int a,b;
	
	printf("Enter 2 numbers \n");
	scanf("%d %d",&a,&b);
	
	
	int marks[a][b];
	char name[5][100];
	int total [5] = {0};
	for(int i=0;i<a;i++)
	{
		fflush(stdin);
		printf("enter your name\n");
		gets(name);
		for(int j=0;j<b;j++)
		{
			printf("Enter Number [%d][%d] at index \n",i,j);
			scanf("%d",&marks[i][j]);
			total[i] = total[i] + marks[i][j];
			printf("Total is %d\n",total[i]);
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
}
	
//	for()
	
	
	
	
	
	
	
	
