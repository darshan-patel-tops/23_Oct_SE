#include<stdio.h>
#include <math.h> 

main()
{
	
	float a,b;
	
	printf("Enter a number \n");
	scanf("%f",&a);
	scanf("%f",&b);
//	printf("Power raised is %d ",a**);
	printf("Square Root is %f \n",sqrt(a));
	
	printf("Closest Round figure is %f \n",ceil(a));
	printf("Closest Round figure is %f \n",floor(a));
	
	printf("Power raised by %f",pow(a,b));
	
	
	
}