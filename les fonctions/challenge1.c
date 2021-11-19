#include<stdio.h>
 int  add(int a , int b){
     int A = a + b;
     return A ;}

 int main(){
    int a,b ;

     printf (" entrer le nombre a\n");
     scanf("%d",&a);
     printf("entrer le nombre b\n");
     scanf("%d",&b);
       
printf("la somme de a et b est %d", add(a,b));}
