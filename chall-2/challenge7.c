#include<stdio.h>
int main(){


    float x;

    printf("entrer un nombre");
    scanf("%f",x);

    if(x >0){
       
       printf("%f le nombre est positif",x);
    }
    else if(x<0){
       printf("%f le nombre ets negatif",x);
    }
    else {
       printf("%f le nombre est nule",x);
   }

return 0;

}