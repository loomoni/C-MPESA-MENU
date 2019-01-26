//program to show simple menue of voda m.pesa

#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
 
int main()
 {
 	int n,n1,n2,n3,n4,n5,n6,n8,n7,n9,n11,n10,n12,n13,n14,n15,n16,n18,n19,n21,n22,n23,n24,k,s;
 	int n25,n26,n27,n28,n29,n30;
 	char p[10];
 //	char n7,n10;
 	printf("M-PESA\n");
 	char n17[10];
 	char n20[10];
 	printf("1. Tuma pesa\n");
 	printf("2. Toa pesa\n");
 	printf("3. Nunua Vifurushi/Muda wa Maongezi\n");
 	printf("4. LIPA kwa M-Pesa\n");
 	printf("5. M-Pawa\n");
 	printf("6. Hudama za kifedha\n");
 	printf("7. Akaunti yangu\n");
 	scanf("%d",&n);
 	
//	 clrscr()
 	
 	switch(n)
 	{
 		case 1: { printf("1. Weka namba ya simu\n");
 		          printf("2. Chagua kwenye Orodha\n");
 		          printf("3. Tuma pesa nje\n");
 		          printf("4. Kwenda Benki\n");
 		          printf("5. Mitandao mingine\n");
 		          scanf("%d",&n1);
 		          
 		        	break;
		     	
			  }
		         
		case 2:   printf("Weka namba ya wakala au 999999 kutoa pesa kwenye ATM\n");
		          scanf("%d",&n23);
		          printf("Weka kiasi\n");
		          scanf("%d",&n24);
		          printf("weka namba ya siri\n");
		          scanf("%d",&n25);
		          printf("Bonyeza 1 kuthibitisha au 2 kubatilisha: Chukua %d Tsh kutoka kwa %d\n",n24,n23);
		          printf("1 kuthibitisha\n");
		          printf("2 kubatilisha\n");
		        
		          break;
				 		          
				 
	    
	 }
	 
	 
	 
	switch(n1)
   {
     	case 1: {
     		      printf("Weka namba ya simu:\n ");
 		              scanf("%s",&p);
 		          printf("Weka kiasi:\n");
 		              scanf("%d",&k);
 		          printf("Weka namba ya siri:\n");
 		              scanf("%d",&s);
 		        printf("Unatuma Tsh%d kwenda kwa %s. Bonyeza 1 kuthibititisha au 2 kubatilisha:\n",k,p);
			    break;
		        }
 		
 		case 2: printf("hakuna namba kwenye orodha, weka namba tafadhali:\n");
 		          	       break;
 	    case 3: { printf("Select Option:\n");
 	              printf("1. Tuma pesa:\n");
 	              printf("2. Angalia viwango vya kubadilisha fedha:\n");
 	              scanf("%d",&n2);
			    break;
		        }
					          	
        case 4:  {
	    	       printf("1. CRDB\n");
	    	       printf("2. NMB\n");
	    	       printf("3. NBC\n");
	    	       scanf("%d",&n3);
			     break;
	         	 }
	    case 5: {
	    	       printf("Chagua:\n");
	    	       printf("1 Airtel Money\n");
	    	       printf("2 Tigo Pesa\n");
	    	       scanf("%d",&n16);
	    	       
			     break;
		         }
			}
	   switch(n2)
	   {
	   	 case 1: printf("Ingiza Namba ya Mpokeaji (Anza na 254...):\n ");
	   	           break;
	   	  case 2: printf("weka kiasi cha kutuma Kenya shilingi:\n");
	   	           break;
	   }
	   switch(n3)
	   {
	   	case 1: { 
	    	       printf("1. weka namba ya akaunti\n");
	    	       printf("2. chagua kwenye orodha\n");
	    	       scanf("%d",&n4);
			     break;
		        }
		        
		case 2: { 
	    	       printf("1. weka namba ya akaunti:\n");
	    	       printf("2. chagua kwenye orodha:\n");
	    	        scanf("%d",&n5);
			     break;
		        }
		case 3: { 
	    	       printf("1. weka namba ya akaunti.\n");
	    	       printf("2. chagua kwenye orodha.\n");
	    	        scanf("%d",&n6);
			     break;
		        }
	   }
	   
	   switch(n4)
	   {
	   	 case 1: printf("Ingiza namba ya malipo\n");
	   	          scanf("%d",&n7);
	   	          printf("weka kiasi\n");
	   	          scanf("%d",&n8);
	   	          printf("weka namba ya siri\n");
	   	          scanf("%d",&n9);
	   	          printf("Bonyeza 1 kuthibitsha au 2 kubatilisha Tuma Tsh%d kwenda CRDB, Akaunti %d",n8,n7); 
	   	          break;
	   	  case 2: printf("hakuna namba kwenye orodha");
	   	          break;
	   }
	   switch(n5)
	   {
	   	case 1: printf("Ingiza namba ya malipo\n");
	   	          scanf("%d",&n10);
	   	          printf("weka kiasi\n");
	   	          scanf("%d",&n11);
	   	          printf("weka namba ya siri\n");
	   	          scanf("%d",&n12);
	   	          printf("Bonyeza 1 kuthibitsha au 2 kubatilisha Tuma Tsh%d kwenda NMB, Akaunti %d",n11,n10); 
	   	          break;
	   	  case 2: printf("hakuna namba kwenye orodha");
	   	          break;
	   }
	   switch(n6)
	   {
	   		case 1: printf("Ingiza namba ya malipo\n");
	   	          scanf("%d",&n13);
	   	          printf("weka kiasi\n");
	   	          scanf("%d",&n14);
	   	          printf("weka namba ya siri\n");
	   	          scanf("%d",&n15);
	   	          printf("Bonyeza 1 kuthibitsha au 2 kubatilisha Tuma Tsh%d kwenda NBC, Akaunti %d",n14,n13); 
	   	          break;
	   	  case 2: printf("hakuna namba kwenye orodha");
	   	          break;
	   }
	   switch(n16)
	    {
	    	case 1: printf("Weka namba ya simu\n");
	    	        scanf("%s",&n17);
	    	        printf("Weka kiasi\n");
	    	        scanf("%d",&n18);
	    	        printf("weka namba ya siri\n");
	    	        scanf("%d",&n19);
	    	        printf("Unatuama Tsh%d kwenda kwa %s. Bonyeza 1 kuthibitisha au 2 kubatilisha:",n18,n17);
	    	        
	    	case 2: printf("Weka namba ya simu\n");
	    	        scanf("%s",&n20);
	    	        printf("Weka kiasi\n");
	    	        scanf("%d",&n21);
	    	        printf("weka namba ya siri\n");
	    	        scanf("%d",&n22);
	    	        printf("Unatuama Tsh%d kwenda kwa %s. Bonyeza 1 kuthibitisha au 2 kubatilisha:",n21,n20);
	    	                
		}
	  
 	}
 	
