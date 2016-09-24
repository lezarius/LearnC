#include <stdio.h>
#include <math.h>

int main(){

float a,b,s,r;

a=0;
b=0;
s=0;
r=0;

printf("Programme de feigniant qui te calcule le théo\' de mr Pythagore. Saisie ta valeur a :\n");
scanf("%f",&a);
printf("La valeur a = %f\n",a);

printf("Saisie maintenant la valeurs de b:\n ");
scanf("%f",&b);
printf("La valeur b = %f\n",b);

s=(a*a) + (b*b);
r=sqrt(s);
printf("La veuleur de C est %f",r);

 printf("\n"); 
return 0;

}
