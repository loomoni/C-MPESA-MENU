#include<stdio.h>
main(){
float scores[5];
int i;
for(i=0; i<5;i++){
printf("Score %d ", i+1);
scanf("%f",&scores[i]);


//printf("  ");


}
printf("\n");
for(i=0; i<5;i++){
printf(" %.2f\n",scores[i]);

}

}

