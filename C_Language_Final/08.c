#include<stdio.h>


main()
{
	
	char choice;
	
	
	printf("\t\t\t\t\t\t Welcome to Jumanji \n");
	
	printf("So this is the first step \n");
	
	printf("Welcome to the Jungle \nYou have 2 choices Press L to go left to the Jungle");
	printf(" and Press R to go the right to the river \n");
	
	
	scanf("%c",&choice);
	
	if( (choice == 'L' || choice == 'l')  || (choice == 'R' || choice == 'r')   )
	{
		
		if(choice == 'l' || choice == 'L')
		{
			printf("You are Walking towards Jungle \n");
			printf("You have 2 Choices Take Jeep Press Y or N \n");
			fflush(stdin);
			scanf("%c",&choice);
			if(choice == 'Y' || choice == 'y')
			{
				printf("You Took Jeep \n");
				printf("You Found Map and you found way to the Gold Mine\n");
				printf("You Reached Gold Mine\n");
				printf("You Found Shovel \n ");
				printf("You are mining\n");
				printf("You Encountered Spiders \n");
				printf("You are running away from them\n");
				printf("You have 2 Choices Go Left or Right \n");
							fflush(stdin);
				scanf("%c",&choice);
				if(choice == 'l' || choice == 'L' )
				{
					printf("You were running and fell into the abyss or cliff and you died Game Over");
				}
				else if(choice == 'R' || choice == 'r')
				{
					printf("You Found Fire \n");
					printf("You burned the spiders\n");
					printf("You went to the gold again\n");
					printf("A Huge Dragon is sleeping \n");
					printf("Press W for walking R for run F for Fight");
					fflush(stdin);
				scanf("%c",&choice);
					if(choice == 'w')
					{
						printf("You reached gold\n");
						printf("You Took gold and went back\n");
					}
					else if(choice == 'f')
					{
						printf("You found GUN  \n");
						printf("You fired at dragon \n");
						printf("Dragon Woked up  and he is angry and his skin is very hard\n");
						printf("He throw flames and you died\n");
					}
					else if(choice == 'r')
					{
						printf("you found a deadly weapon\n");
						printf("You went towards dragon and fought him and he died");
						
					}
				}
				
			}
			else if(choice == 'N' || choice == 'n')
			{
				printf("You are walking \n");
			}
			else
			{
				printf("Enter Valid choice");
			}
			
		}
		else if(choice == 'R' || choice == 'r')
		{
			printf("You are Walking towards River");
			
		}



	}
	else
	{
		printf("Please enter valid choice");
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}