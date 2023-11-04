#include<stdio.h>
#include <string.h>



main()
{
	
	char letters[] = "This is a string";
	
	printf("Length of string is %d \n",strlen(letters));
	
	
	float name[100];
//	int name[100];
//	char name[100];

	printf("Size of Variable is %d \n",sizeof(name));
	
//	printf("Size of Variable is %d",sizeof(letters));



	char greeting[] = "Hello";
	char city[] = "Ahmedabad";

//	printf("%s %s ",greeting);

	printf(strcat(greeting,city));
	
	
	
	
	
	
	char name1[] = "Shrey";
	char name2[100];
	
	
	strcpy(name2,name1);
	
	printf("\n%s\n", name2);

	
	char str1[] = "Hello";
	char str2[] = "hello";
	printf("%d\n", strcmp(str1, str2));  // Returns 0 (the strings are equal)

	
	
	

}
