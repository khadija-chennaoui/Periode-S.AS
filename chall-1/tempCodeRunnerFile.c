#include <stdio.h>

int main(){

    float C ,F ;
    printf ("entrer la valeur du températur de  celcius ");
    scanf("%f" ,&F);
    F = (( C * 1.8 ) + 32);
    printf ("la température de farhranhit est %f",F);
    if(C <= 0 )
    {
        printf ("température trés froid") ;
    }
    else if (C < 20) 
    {
        printf ("température froid");
    }
    else if (C > 20 && C <40)
    {
        printf("température chaud ");
    }
    else 
    {
        printf("température trés chaud");
    }

     return 0 ;

}