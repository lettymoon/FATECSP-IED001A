/* Exercício - Ordenação crescente.

Crie um programa que usa duas pilhas A e B para ordenar uma sequência de n números dados pelo usuário. A idia é organizar a pilha A de modo que 
nenhum item seja empilhado sobre outro menor (use a pilha B apenas para manobrar) e, depois, descarregar e exibir os itens da pilha A.*/

#include <stdio.h>
#include "pilha.h"

int main(void){

    Stack stackA;
    create(&stackA);

    Stack stackB;
    create(&stackB);

    // ordenar na pilha
    int n=1;
    printf("Entre com uma lista de números inteiros, digite 0 para parar de listar: ");

     while(1) {
        scanf("%d", &n);

        if (n == 0)
            break;

        while (!isEmpty(&stackA) && n > top(&stackA)) {
            push(top(&stackA), &stackB);
            pop(&stackA);
        }

        push(n, &stackA);

        while (!isEmpty(&stackB)) {
            push(top(&stackB), &stackA);
            pop(&stackB);
        }
    }

    // imprimir resultado
    int firstNum = 1;
    printf("Stack A: ");
    while(!isEmpty(&stackA)){
        if (!firstNum)
            printf(" - ");
        else
            firstNum = 0;
        printf("%d", top(&stackA));
        pop(&stackA);
    }
    printf("\n");

    return 0;
}