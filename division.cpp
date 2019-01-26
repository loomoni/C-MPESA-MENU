#include<stdio.h>
main()
 
 {
 	int a,b;
 	float division;
 	
 	printf("enter the two integer: ");
 	scanf("%d%d",&a,&b);
 	
 	if(b==0)
 	{
 		printf("invalid");
	 }
	 
	 else 
	 {
	 	division = a/b;
	   printf("division=%.2f",division);
	 }
 }
