//program to sum num from 101-97
#include<stdio.h>
main()
 {
 	int i,sum=0;
 	
 	for(i=101;i>=1;--i)
 	
 	{
 	  if(i-2)	
 	 sum=sum + i;
	}
	
	 printf("sum = %d\n",sum);
 }
