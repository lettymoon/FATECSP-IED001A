// Passagem por valor 

#include <stdio.h>

void troca(int a, int b) {
   int c = a;
   a = b;
   b = c;
}

int main(void){

   int x,y;
   scanf("%d%d", &x, &y);
   troca(x,y);  // (5,3)

   return 0;
}


/*
a - b - c
3 - 5 - 5

x - y
5 - 3
*/