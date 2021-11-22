#include<stdio.h>
#include <stdlib.h>
#include<string.h>
#include<windows.h>

typedef struct {
    char CIN[30];
    char NOM[20];
    char prenom[20];
    double Montant;
}infoclients ;

  void ajoutercompte(){
     infoclients info;
     printf("CIN\n");
     scanf("%s",info.CIN);
     printf("Nom\n");
     scanf("%s",info.NOM);
     printf("Preno\nm");
     scanf("%s",info.prenom);
     printf("Montant \n");
     scanf("%f",&info.Montant); }
     
      void ajouterpluscompte(){
          int i,nombre;
          for(i=0;i<nombre;i++){
          ajoutercompte();
          return 0;
          
          void menu (){
    int choix;
    printf("**************Bienvenue**************\n");
    printf("*******MENU*******\n");
    printf("choisissez le nombre de votre choix\n");
    scanf("%d",choix);
    do{
        printf("1-introduire un compte bancaire\n");
        printf("2-introduire plusieurs ncompte bancaire\n");
        printf("3-operation\n");
        printf("4-Affichage\n");
        printf("5-fidelisation \n") ;
        printf("6-quitter l'application\n");
        scanf("%d",&choix);
        system("cls");
    switch(choix)
    {
        case 1 :
        printf("ajoutercompte");
        break;
        case 2 :
        printf("2") ;
        break;
        case 3 :
        printf("3") ;
        break;
        case 4 :
        printf("3") ;
        break ;
        case 5 :
        printf("4"); 
        break ; 
        default :
        printf("5"); 
        break;
    }
}while (choix != 6);

}
int main ()
{
menu () ;

return 0 ;


}