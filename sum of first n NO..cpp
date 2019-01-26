#include<stdio.h>
#include<stdlib.h>
main()
 {
 	int i,n,sum=0;
 	printf("Enter the number to find sum: ");
 	scanf("%d",&n);
 	
 	for(i=0;i<=n;i++)
 	{
 		sum=sum+i;
	 }
	 
	 printf("the sum of first %d number is %d.",n,sum);
 }
