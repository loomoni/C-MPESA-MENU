#include<stdio.h>
#include<math.h>
#define PI 3.14
 
 float findarea(float r);
 
 
 int main()
 {
 	 float area,r;

 	 printf("enter the radius of circle: ");
 	 scanf("%f",&r);
 	 area=findarea(r);
 	 printf("area of circle = %.2f",area);
 	 
 	 return 0;
 }
 
 float findarea(float r)
 {   
   // float PI=3.14;
 	float area;
 	area= PI*pow(r,2);
 	return area;
 }
