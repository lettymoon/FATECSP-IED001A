/*Exercício 01 - Pilhas

Usando uma pilha, crie um programa que lê um número inteiro positivo n (em base 10) e uma base b entre 2 e 36 e,
em seguida, exibe o número n na base b. Use as letras de A a Z para representar números em bases entre 11 e 36.
*/

#include <stdio.h>
#include "pilha.h"

void converterParaBase(int n, int b) {
    Stack pilha;
    create(&pilha);

    char digitos[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

    while (n > 0) {
        int resto = n % b;
        char digito;

        if (resto >= 10){
            digito = digitos[resto - 10];
        } 
        else{
            digito = '0' + resto;
        }

        push(digito, &pilha);
        n /= b;
    }

    printf("Resultado: ");
    while (!isEmpty(&pilha)) {
        printf("%c", pop(&pilha));
    }

    printf("\n");
}

int main(void){

    int n;
    printf("Entre com um número na base 10: ");
    scanf("%d", &n);
    int b;
    printf("Entre com uma base entre 2 e 36: ");
    scanf("%d", &b);

    if(b < 2 && b > 36){
        printf("Base fora do intervalo.");
        return 0;
    }

    converterParaBase(n, b);

    return 0;
}