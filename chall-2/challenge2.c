#include<stdio.h>
#include<stdlib.h>
int main(){
int nombre;
printf("entrer un nombre entier:");
scanf ("%d" , &nombre);
if(nombre % 2 != 0) {
    printf("%d est un nombre impair.",nombre );

}
    else{

    printf("%d est un nombre pair.",nombre );
    }
    return 0 ;

}