#include <math.h>
#include <stdio.h>

int main() {

  float a,b,s;
  a=0;
  b=0;
  s=0;

  printf("Caclulatrice : \n\n");
  
  printf("Valeur de a :%f \n",a);
  scanf("%f", &a); 

  printf("Valeur de b :%f \n",b);
  scanf("%f", &b);
  
s=fabsf(a-b);
  printf("Valeur de a+b :%f ",s);
  
  getchar ();
  printf("\n");
return 0;

}
