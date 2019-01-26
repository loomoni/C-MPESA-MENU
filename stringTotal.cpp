#include<stdio.h>
#include<string.h>

int main(){
	char name1[20];
	char name2[20];
	int Total;
	
	printf("Enter your first name: ");
	scanf("%s",name1);
	
	printf("Enter your second name: ");
	scanf("%s",name2);
	
	printf("your first name has %d letters\n",strlen(name1));
	printf("your second name has %d letters\n",strlen(name2));
	
	Total = strlen(name1) + strlen(name2);
	printf("The length of total name is %d ",Total);
}
