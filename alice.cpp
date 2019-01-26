#include<stdio.h>
int main(){
	
	int n,i=0;
	double sum=0;
	
	printf("Enter an integer n: ");
	scanf("%d" ,&n);
	
	for(i=0;i<=n;i++)
	{
		sum = sum + (1/(1+i));
		printf("The sum is: %.2f\n ",sum);
		
	}
	
	
}
