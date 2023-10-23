#include<stdio.h>

main()
{
	
//	string
// 	array


//	char a,b,c,d,e;
//	printf("Enter your name : \n");
//	scanf("%c %c %c %c %c",&a,&b,&c,&d,&e);	
//	
//	
//	printf("Your name is : %c%c%c%c%c",a,b,c,d,e);
	
char name[50];

printf("Enter your name : \n");
gets(name);
//scanf("%s",&name);
//scanf("%c",&name);

printf("Your name is : %s",name);
//printf("Your name is : %c",name);


}