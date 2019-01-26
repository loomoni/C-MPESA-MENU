#include<stdio.h>
 main()
 {
 	int i,n;
 	long f;
 	
 	printf("Enter the number to find factorial: ");
 	scanf("%d",&n);
 	
 	if(n<0)
 	printf("Enter the positive integer!");
 	
 	
	 else {
	 
 	
 	for(i=1;i<=n;i++)
 	{
 		f=f*i;
 		
	 }
	 printf("the factorial of %d is %d",n,f);
    }
    
 }
