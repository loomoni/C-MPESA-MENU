#include <stdio.h>
int addNumbers(int a, int b);         // function prototype
int main()
{
    int a,b,sum;
    printf("Enters two numbers:\n");
    scanf("%d %d",&a,&b);
    sum = addNumbers(a, b);        // function call
    printf("sum = %d",sum);
    return 0;
}

int addNumbers(int a,int b)         // function definition   
 {
    int sum;
    sum = a+b;
    return sum;                  // return statement
 }

