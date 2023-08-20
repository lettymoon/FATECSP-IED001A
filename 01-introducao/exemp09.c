// String

#include <stdio.h>
#include <string.h>

int main(void) {
   char s[256];
   printf("Senha? ");
   gets(s);
   if( strcmp(s,"abracadabra")==0 ) puts("Ok!");
   else puts("Senha invalida!");
   return 0;
}

/*
char s[3] = "oi";

s: o - i - \0
   0 - 1 - 2

strlen(s): dá o comprimento de s
strcpy(a,b): copia b para a
strcmp(a,b): compara a com b

*/
