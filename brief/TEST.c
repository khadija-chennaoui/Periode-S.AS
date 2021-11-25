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


infoclients info[100];
int i = 0;

void menu ();
void ajoutercompte(){
     printf("CIN \n");
     scanf("%s",info[0].CIN);
     printf("Nom \n");
     scanf("%s",info[0].NOM);
     printf("Prenom \n");
     scanf("%s",info[0].prenom);
     printf("Montant \n");
     scanf("%lf",&info[0].Montant); 

     printf("%s  ",info[0].CIN);
     printf("%s  ",info[0].NOM);
     printf("%s  ",info[0].prenom);
     printf("%lf  ",info[0].Montant);

     menu();
     
     }
     
      void ajouterpluscompte(){
          int i,nombre;
          printf("combien voulez-vous enregistrer des clients ?");
          scanf("%d",&nombre);
             for(i=0;i<nombre;i++){
                printf("CIN \n");
                scanf("%s",info[i].CIN);
                printf("Nom \n");
                scanf("%s",info[i].NOM);
                printf("Prenom \n");
                scanf("%s",info[i].prenom);
                printf("Montant \n");
                scanf("%lf",&info[i].Montant);}
                system("cls");                    
                menu() ;   
                }
int rechercheparcin(){
    char cin[30] ;
    printf("entrer le cin :");
    scanf("%s",cin);
    for(int i=0; i<100; i++){
        if(strcmp(info[i].CIN,cin)==0)
        
    return i ;
    
    }
}void retrait(){
        float Montant ;
        int i = rechercheparcin();
        printf("\n %s %s %s %f \n",info [i].CIN,info[i].NOM,info[i].prenom,info[i].Montant);
        printf(" donner le Mantant pour retrait :");
        scanf("%f",&Montant);
        if(Montant > info[i].Montant){
            printf("impossible pour retrait !!!");
        }
        else{
            info[i].Montant = info[i].Montant - Montant;
            printf("\n%s %s %s %f \n",info[i].CIN,info[i].NOM,info[i].prenom,info[i].Montant);}
        }
    
void depot(){
        float Montant ;
        int i = rechercheparcin();
        printf("\n %s %s %s %f \n",info [i].CIN,info[i].NOM,info[i].prenom,info[i].Montant);
        printf(" donner le Mantant pour retrait :");
        scanf("%f",&Montant);
        
            info[i].Montant = info[i].Montant + Montant;
            printf("\n%s %s %s \n",info[i].CIN,info[i].NOM,info[i].prenom,info[i].Montant);
    }


void operation(){
    int choix;
    system("cls");
    printf("\t<<<<<<<<<< les operations >>>>>>>>>> \n\n");
    printf("\t  __1__ retrait____: \n\n");
    printf("\t__2__ depot____:\n\n");
    printf("\tentrer votre choix :");
    scanf("%d",&choix);

    switch (choix)
    {
    case 1 :
    retrait();
     break;
    case 2 :
    depot();
    break;
    default:
       printf("^^^^erreur de saisi^^^^  ");
        break;
    }
}

void menu (){
            int choix;
        printf("\t\t\t**************Bienvenue**************\t\n");
        printf("\t\t    *******MENU*******\n");
        printf("\tchoisissez le nombre de votre choix\n");
        
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
       ajoutercompte();
        break;
        case 2 :
        ajouterpluscompte();
        break;
        case 3 :
        operation();
        break;
        case 4 :
        printf("4") ;
        break ;
        case 5 :
        printf("5"); 
        break ; 
        default :
        printf("quitter l'application");
        break;
    
        
    }
}while(choix<1 || choix>6);

}
int main ()
{
    menu();
   
return 0 ;
}