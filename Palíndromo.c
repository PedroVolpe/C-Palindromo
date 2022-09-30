#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int palindromo(){

    char palavra[50], copia[50];
    int i, tam, iguais = 0;

    printf("Digite uma palavra:\n");
    scanf("%s", palavra);

    tam = strlen(palavra);
    for(i = 0; i < strlen(palavra); i++){
        copia[i] = palavra[tam - 1];
        tam--;
    }

    copia[i] = '\0';
    tam = strlen(palavra);

    printf("\nPalavra original: %s\nCopia: %s\n", palavra, copia);

    for(i = 0; i < tam; i++){
        if(palavra[i] == copia[i])
            iguais++;
    }

    if(tam == iguais)
        printf("\nÉ palindroma.\n");
    else
        printf("\nNao é palindroma.\n");

    return 0;
}

int main(void) {
  
  palindromo();
  
  return 0;

}