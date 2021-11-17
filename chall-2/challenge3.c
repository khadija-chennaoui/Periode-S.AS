#include<stdio.h>
int main(){
char A ;
printf("entrer un caractere");
scanf("%s",&A);

switch (A) {

case 'a' :{
printf("possede un voyelle.\n");}
break;

case 'e':{
 printf("possede un voyelle.\n");}
break;

case 'o':{
printf("possede un voyelle.\n");}
 break;

case 'i' :{
printf("possede un voyelle.\n");}
break;


case 'y':{
printf("possede un voyelle.\n");}
break;

default:{
printf("vous avez choisi un consonne\n"); }
break ;



}
return 0;
    
}
