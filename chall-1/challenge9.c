#include<stdio.h>
#include<math.h>
int main(){
float x1,y1,x2,y2 , mn ;
printf("saisies les valeurs de x1\n");
scanf ("%f", &x1);


printf("saisies la valeurs de x2\n");
scanf ("%f", &x2);

printf("saisies la valeurs de y1 \n");
scanf ("%f", &y1); 

printf("saisies la valeurs de y2\n");
scanf ("%f", &y2);



mn =  sqrt ((pow (x2 - x1 , 2)) +( pow (y2-y1 , 2)  )) ;

 printf (" la distance entre MN est : %.1f \n" ,mn );
 return 0 ; 


}
