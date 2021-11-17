#include<stdio.h>
int main (){
    int a,b,c,d;
    printf("entrer la valeur de la premier entier\n");
    scanf("%d",&a);
    printf("entrer la deuxiem valeur entier\n" );
    scanf("%d",&b);
    c=a+b;
    d=c*3;

    if (a==b) 
    { printf("les valeurs sont identiques  la somme est :%d\n le triple de somme est:%d\n",c,d);}
      else  
    printf("les deus valeurs ne sont pas identiques");

return 0 ;

    }
