// Função

#include <stdio.h>

int fat(int n) {
   int f = 1;
   for(int i=2; i<=n; i++) f *= i;
   return f;
}

int main(void) {
   printf("Fatorial do 5: %d\n", fat(5));    
   return 0;
}

/*
tipo nome(parâmetros){
    ...
}
nome: identificador da função.
tipo: tipo de saída da função, se há saída, use void.
parâmetro: variáveis de entrada da função (ou void).
*/