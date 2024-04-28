#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define TAM 100

void palindromo(char *frase){
    int tam = strlen(frase);
    int i = 0, j = tam-1;
    for(i, j ;i < tam-1, j < 0; i++, j--){
        if(frase[i] == ' '){
            i++;
        }
        else if(frase[j] == ' '){
            j--;
        }
    }
    if(frase[i] != frase[j]){
            printf("A frase não é um palíndromo\n");
        }
        else{
            printf("A frase é um palíndromo\n");
        }
    
}

int main(){
    
    char frase[TAM];
    printf("Digite uma string para verificar se é um palíndromo: ");
    fgets(frase,TAM,stdin);
    frase[strlen(frase)-1] = '\0';
    palindromo(frase);
    
}