#include <stdio.h>

int main(){

    float C ,F ;
    printf ("entrer la valeur du températur de  celcius ");
    scanf("%f" ,&F);
    F = (( C*1.8 ) + 32);
    printf ("la température de farhranhit est %f",F);
    return 0 ;

}