#include <stdio.h>

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
    P->item = malloc(m*sizeof(Itemp));
    return P;
}

int Pvazia(Pilha P){
    if(P->topo == -1)
        return 1;
    else
        return 0;
}

int Pcheia(Pilha P){
    if(P->topo == P->max-1)
        return 1;
    else
        return 0;
}

void empilha(Itemp x, Pilha P){
    if(cheia(P)){
        puts("Pilha cheia!");
        abort();
    }
    P->topo++;
    P->item[P->topo] = x;
}

Itemp desempilha(Pilha P){
    if(vazia(P)){
        puts("Pilha vazia!");
        abort();
    }
    Itemp x = P->item[P->topo];
    P->topo--;
    return x;
}

Itemp topo(Pilha P){
    if(vazia(P)){
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
