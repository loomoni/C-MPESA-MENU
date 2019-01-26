#include<stdio.h>

int main()

{

     float a,b,c,av=0;

 

     printf("Enter any three numbers to find their average \n");

     scanf("%f%f%f",&a,&b,&c);

 

     av=(a+b+c)/3.0;

 

     printf("\n Average of three numbers is \t %f",av);

     getch();
}
