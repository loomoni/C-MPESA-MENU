#include<stdio.h>

int my_array[] = {23, 12, 54, 0, -9, 37};
int *ptr;

 main()

{
    int i;
    
     ptr = my_array;
      
	  printf("\n");

 for(i=0;i<6;i++)
  {
    printf("my_array[%d] = %d   ",i,my_array[i]);
    printf("ptr + %d = %d\n",i, *(ptr++));
  }
}


