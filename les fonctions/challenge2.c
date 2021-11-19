#include<stdio.h>
void echanger(int a,int b){
    int c ;
    c = a;
    a = b;
    b = c ;
    printf(" a =%d \n b =%d\n",a,b);
}
int main(){
    int a,b ;
    printf (" entrer le nombre a\n");
    scanf("%d",&a);
    printf("entrer le nombre b\n");
    scanf("%d",&b);
    printf(" a =%d \n b =%d\n",a,b);
    echanger(a,b);
}

    
