/* Exercício 03 - Pilhas
Usando pilha, crie a função inverte(s), que inverte a ordem dos caracteres na cadeia s dada como entrada.
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

