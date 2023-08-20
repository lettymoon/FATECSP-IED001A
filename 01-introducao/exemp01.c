// Estrutura sequencial


#include <stdio.h>
#include <math.h>

int main(void) {
   float p, a, i;
   printf("Peso e altura? ");
   scanf("%f %f",&p,&a);
   i = p/pow(a,2);
   printf("IMC = %.2f\n",i);
   return 0;
}
// A função pow() está declarada no arquivo math.h!