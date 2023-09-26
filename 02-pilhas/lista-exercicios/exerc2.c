/* Exercício 02 - Pilhas
Crie um programa que lê uma sequência de n números inteiros digitados pelo usuário e, usando duas pilhas A e B,
ordena essa sequência de forma decrescente e sem repetição.
*/

#include <stdio.h>
#include "pilha.h"

void sortStack(Stack *pilhaA){
    Stack pilhaB;
    create(&pilhaB);

     while (!isEmpty(pilhaA)) {
        int temp = pop(pilhaA);

        // removendo valores repetidos
        while (!isEmpty(pilhaA) && top(pilhaA) == temp) {
            pop(pilhaA);
        }

        // inseri em ordem decrescente na pilhaB
        while (!isEmpty(&pilhaB) && top(&pilhaB) < temp) {
            push(pop(&pilhaB), pilhaA);
        }

        push(temp, &pilhaB);
    }

    // coloca os elementos ordenados da pilhaB na pilhaA
    while (!isEmpty(&pilhaB)) {
        push(pop(&pilhaB), pilhaA);
    }

}

int main(void){

    Stack pilhaA;
    create(&pilhaA);

    // listando a lista de números na pilhaA
    int n = 1;
    printf("Liste os números para serem ordenados em ordem decrescente.\nDigite 0 para parar de listar.\n");
    while(n!=0){
        scanf("%d", &n);
        if (n != 0){ 
            push(n, &pilhaA);
        }
    }

    // imprimir o resultado ordenado
    sortStack(&pilhaA);
    printf("Sequência ordenada: ");
    int firstNum = 1;

    while (!isEmpty(&pilhaA)){
        int Num = pop(&pilhaA);
        if (!firstNum)
            printf(" - ");
        else
            firstNum = 0;
        
        printf("%d", Num);
    }
    printf("\n");

    return 0;
}