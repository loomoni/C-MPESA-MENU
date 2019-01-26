#include<stdio.h>
 main()
 {
 	int n;
 	printf("MONTHS:");
 	printf("\n");
 	printf("1.JANUARY\n");
 	printf("2.FEBUARY\n");
 	printf("3.MARCH\n");
 	printf("4.APRIAL\n");
 	printf("5.MAY\n");
 	printf("6.JUNE\n");
 	printf("7.JULY\n");
 	printf("8.AGUST\n");
 	printf("9.SEPT\n");
 	printf("10.OCT\n");
 	printf("11.NOV.\n");
 	printf("12.DECEMBER\n");
 	scanf("%d",&n);
 	
 	switch(n)
 	{
 		case 1: 
		case 4:
		 printf("31");
 		      break;
    	case 2: printf("28");
 		      break;
    	case 3: printf("30");
 		      break;
    	
 		           
	 }

 }
