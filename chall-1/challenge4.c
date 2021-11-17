#include<stdio.h>
#include<stdlib.h>
int main(){

    float metres,km,mile ;
    printf("entrer la valeur de metres : ");
    scanf("%f", &mile);
    km = mile/1.609;
    printf("le kolometrage c'est :%.2f\n\n",km);
    metres = km * 1000;
    printf("le Mile c'est : %.2f", metres );

     return 0 ;
    
    }