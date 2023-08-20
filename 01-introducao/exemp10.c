// Registro

#include <stdio.h>

typedef struct { float x; float y; } Ponto;

int main(void) {
   Ponto p = {1.5,2.5};
   printf("(%.1f,%.1f)\n",p.x,p.y);
   return 0;
}

/*
typedef struct reg{ // cria tipo
    char a;
    foat b;
} Reg;
Reg r = {'x', 2.5}; // cria variável

r: x - 2.5 (intens)
   a - b   (campos)

*/