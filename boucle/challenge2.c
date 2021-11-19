#include<stdio.h>
int main(){
    int i,l,s,t;
    printf("stp entrer le nombre des lignes ");
    scanf("%d",&l);
     for(i = 1; i<=l ;i++){

           for( s=0 ; s < l-i ; s++){
               printf(" ");}
           for( t=0; t<i*2-1 ; t++){ 
               printf("*");}



            printf(" \n ");}
 
return 0;
}
