#include<stdio.h>
#include<math.h>
main()
 {
 	int n;
 	float p=100000;
 	float r=0.005;
 	float a;
 	
 	printf("year\t");
 	printf("amount present in a beak\n");
 	
 	
 	for(n=1;n<=10;n++)
 	{   
 	    a=p*(pow((r+1),n));
 		printf("%d\t Tsh %.2f\n",n,a);
	 }
 	
 	
 	
 	
 	
 }
