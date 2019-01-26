#include<stdio.h>
#include<stdlib.h>
int  findarea(int l, int w);
int findperimeter(int l, int w);

int main()
{
	int l,w,area,perimeter;
	printf("enter the length of rectangle: ");
	scanf("%d",&l);
	printf("enter the width of rectangle: ");
	scanf("%d",&w);
	printf("\n");
	area=findarea(l, w);
	perimeter=findperimeter(l, w);
	printf("the area of rectangle=%d\n",area);
	printf("the perimeter of rectangle=%d\n",perimeter);
	
	return 0;
	
}

  int findarea(int l, int w)
 {
 	int area;
 	area=l*w;
 	return area;
 }
 
 int findperimeter(int l, int w)
 
 {
 	int perimeter;
 	perimeter=2*(l+w);
 	return perimeter;
 }
