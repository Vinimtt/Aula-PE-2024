#include <stdio.h>
#include <string.h>

#define TAM 20
int main(){
int count = 0;
char nome[TAM];
printf("Digite seu nome: ");
fgets(nome,TAM,stdin);
nome[strlen(nome)-1] = '\0';
puts(nome);
while(nome[count] != '\0'){
    count++;
}
printf("Seu vetor tem %d caracteres \n", count);
}



