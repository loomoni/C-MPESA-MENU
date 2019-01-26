#include<stdio.h>
 main()
 
 {
 	int n,set;
 	printf("Enter integer: ");
 	scanf("%d",&n);
 	
 	if(n%2==0)
 	set =1;
 	else
 	set =2;
 	
 	switch(set)
 	{
 		case 1: printf("even");
 		  break;
 		case 2: printf("odd");
 		 break;
 		 default:
 	     	 printf("invalid");
	 }
 }
