#include<stdio.h>
main()
{
	int i;
	float weight[5];
	
	for(i=0;i<5;i++)
	{
		printf("weight %d: ",i+1);
		scanf("%f",&weight[i]);
	}
	
	printf("\n");
	
	for(i=0;i<5;i++)
	{
		printf("%.2f\n",weight[i]);
	}
}
