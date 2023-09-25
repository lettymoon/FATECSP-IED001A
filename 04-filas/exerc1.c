/*Exercício 01 - Filass
Cadeias Palíndromas

O programa do Exemplo 2 não reconhece "Amor a Roma" como uma cadeia palídroma.
Use a função toupper(), declarada em ctype.h, para resolver esse problema (essa função converte uma letra minúscula em maiúscula).
*/

#include <stdio.h>
#include <ctype.h>
#include "pilha.h"
#include "fila.h"

int main(void){

    char s[256];
    Fila F = fila(256);
    Pilha P = pilha(256);

    printf("\nFrase? ");
    fgets(s, sizeof(s), stdin);

    for(int i = 0; s[i]; i++){
        s[i] = toupper(s[i]);
    }

    for(int i=0; s[i]; i++){
        if(isalpha(s[i])){
            enfileira(s[i], F);
            empilha(s[i], P);

        }
    }

    while(!vaziaf(F) && desenfileira(F) == desempilha(P));
    if(vaziaf(F))
        puts("A frase é palindroma.");
    else
        puts("A frase não é palindroma.");
    destroif(&F);
    destroip(&P);

    return 0;
}