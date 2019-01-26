#include<stdio.h>
main()
 {
 	int weeks;
 	printf("enter the integer btwn 1-7: ");
 	scanf("%d",&weeks);
 	
 	switch(weeks)
 	{
 		case 1: printf("MONDAY");
 		       break;
    	case 2: printf("TUESDAY");
 		       break;
 	  	case 3: printf("WENSDAY");
 		       break;
 	   	case 4: printf("THURSDAY");
 		       break;
 	 	case 5: printf("FRIDAY");
 		       break;
     	case 6: printf("SATURDAY");
 		       break;
 	 	case 7: printf("SUNDAY");
 		       break;
 		default: 
 		printf("invalid");
	 }
 }
