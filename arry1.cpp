//MANUAL LISTING
#include <stdio.h>
  
  main()
  
 {
	int theArr[] = {5, 7, 9, 11, 13};
	
	
	
	printf("Array: %d Pointer: %d\n",theArr[0], *theArr);
	printf("Array: %d Pointer: %d\n",theArr[1], *(theArr+1));
	printf("Array: %d Pointer: %d\n",theArr[2], *(theArr+2));
	printf("Array: %d Pointer: %d\n",theArr[3], *(theArr+3));
	printf("Array: %d Pointer: %d\n",theArr[4], *(theArr+4));
 
 }

