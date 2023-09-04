#include <stdio.h>
#include <stdlib.h>
// Estrutura da pilha
typedef char Itemp;
typedef struct pilha{
    int max;
    int topo;
    Itemp *item;
} *Pilha;

Pilha pilha(int m){
    Pilha P = malloc(sizeof(struct pilha));
    P->max = m;
    P->topo = -1;
    P->item = malloc(m * sizeof(Itemp));
    return P;
}

int Pvazia(Pilha P){
    if (P->topo == -1)
        return 1;
    else
        return 0;
}

int Pcheia(Pilha P){
    if (P->topo == P->max - 1)
        return 1;
    else
        return 0;
}

void empilha(Itemp x, Pilha P){
    if (Pcheia(P))
    {
        puts("Pilha cheia!");
        abort();
    }
    P->topo++;
    P->item[P->topo] = x;
}

Itemp desempilha(Pilha P){
    if (Pvazia(P))
    {
        puts("Pilha vazia!");
        abort();
    }
    Itemp x = P->item[P->topo];
    P->topo--;
    return x;
}

Itemp topo(Pilha P){
    if (Pvazia(P))
    {
        puts("Pilha vazia!");
        abort();
    }
    return P->item[P->topo];
}

void Pdestroi(Pilha *P){
    free((*P)->item);
    free(*P);
    *P = NULL;
}

// função que verifica tamanho da frase string
int len(char frase[]){

    int i = 0;
    while (frase[i] != '\0')
        i++;

    return i;
}
// função que inverte as palavras das frases
void inverterFrase(char frase[]){
    printf("%s", frase);
    Pilha pilhaUnica = pilha(500);
    int lenFrase = len(frase);

    for (int i = 0; i < lenFrase; i++)
    {
        if (frase[i] != ' ' && frase[i] != '\n')
        {
            empilha(frase[i], pilhaUnica);
        }
        else
        {
            while (!Pvazia(pilhaUnica))
            {
                char letra = topo(pilhaUnica);
                desempilha(pilhaUnica);
                printf("%c", letra);
            }
            printf(" ");
        }
    }
}

// função que verifica se é palíndromo
int isPalindromeOtimizado(char frase[]){

    int tamanhoFrase = len(frase);
    int meioFrase = tamanhoFrase / 2;

    Pilha pilhaUnica = pilha(500);

    for (int i = 0; i < meioFrase; i++)
    {
        empilha(frase[i], pilhaUnica);
    }

    if (tamanhoFrase % 2 != 0)
    {
        meioFrase++;
    }

    for (int i = meioFrase; i < tamanhoFrase; i++)
    {
        if (topo(pilhaUnica) == frase[i])
            desempilha(pilhaUnica);
        else
            return 0;
    }

    return 1;
}

int main(void){

    char frase[500];
    fgets(frase, 500, stdin);

    printf("%d\n", isPalindromeOtimizado(frase));
    inverterFrase(frase);

    return 0;
}