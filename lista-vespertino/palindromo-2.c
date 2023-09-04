#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <wchar.h>
#include <wctype.h>

//Problema da acentuação resolvido

// Estrutura da pilha
typedef wchar_t Itemp;
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
int len(wchar_t frase[]){

    int i = 0;
    while (frase[i] != L'\0')
        i++;

    return i;
}

// função que inverte as palavras das frases
void inverterFrase(wchar_t frase[]){
    wprintf(L"%ls", frase);
    Pilha pilhaUnica = pilha(500);
    int lenFrase = len(frase);

    for (int i = 0; i < lenFrase; i++)
    {
        if (frase[i] != L' ' && frase[i] != L'\n')
        {
            empilha(frase[i], pilhaUnica);
        }
        else
        {
            while (!Pvazia(pilhaUnica))
            {
                Itemp letra = topo(pilhaUnica);
                desempilha(pilhaUnica);
                wprintf(L"%lc", letra);
            }
            wprintf(L" ");
        }
    }
}

// função que verifica se é palíndromo
int isPalindromeOtimizado(wchar_t frase[]){

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

    setlocale(LC_ALL,"");

    wchar_t frase[500];
    fgetws(frase, 500, stdin);

    wprintf(L"%d\n", isPalindromeOtimizado(frase));
    inverterFrase(frase);

    return 0;
}