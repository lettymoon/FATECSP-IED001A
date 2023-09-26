/* Exercício 03 - Inversão de palavras.
Usando uma pilha, crie um programa para inverter a ordem das letras de uma frase, sem inverter a ordem das palavras das frases. Por exemplo, se for digitada a 
frase "apenas um teste", o programa deverá produzir a seguinte saída: sanepa mu etset.
*/

#include <stdio.h>
#include "pilha.h"
#include "len.h"

void Inverte(char f[]){

    Stack stack;
    create(&stack);
    int lenf = len(f);

    for(int i = 0; i < lenf; i++){
        if(f[i] != ' ' && f[i] != '\n')
            push(f[i], &stack);
        else{
            while(!isEmpty(&stack)){
                char caracter = top(&stack);
                pop(&stack);
                printf("%c", caracter);
            }
            printf(" ");
        }
    }
}


int main(void){

    char f[500];
    fgets(f, 500, stdin);

    Inverte(f);

    return 0;
}

