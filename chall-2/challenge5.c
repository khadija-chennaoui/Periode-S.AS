#include<stdio.h>
#include<math.h>
int main(){
 int a,b,c,d, x1 , x2 , x ;
 printf("veuilles saisir la valeure de a\n ");
scanf("%d",&a);
printf("veuilles saisir la valeure de b\n ");
scanf("%d",&b);
printf("veuilles saisir la valeure de c\n ");
scanf("%d",&c);
 
d = (b*b) - 4 * a * c;

if(d<0)
{ printf("pas de solution\n");}


else if (d>0) {
printf("solution 1=%d\n ",x1 = -b - sqrt (d) / ( 2 * a ));
printf("solution 2=%d\n ",x2 = -b + sqrt (d) / ( 2 * a ));
}

else if (d==0)
{
   x = (-b) / ( 2 * a );
printf ("solution = %d\n ", x);
}



return 0;
}