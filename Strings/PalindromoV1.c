#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define tam 50
void removerEspaco(char *frase) {
    int i, j;
    int n = strlen(frase);

    for (i = 0, j = 0; i < n; i++) {
        if (frase[i] != ' ') {
            frase[j++] = frase[i];
        }
    }
    frase[j] = '\0'; 
}
void inverter(char *frase,char *frase2,int aux){
    strcpy(frase2,frase);
    for(int i = 0; i < strlen(frase2)/2; ++i){
        //if(frase2[i] == ' '){
        //    i++;
        //}
        aux = frase2[i];
        frase2[i] = frase2[strlen(frase2) - 1 - i];
        frase2[strlen(frase2) - 1 - i] = aux;
    }

}
int main(){
    int aux, i, j;
    char frase[tam],frase2[tam];
    printf("Informe a frase para verificar se é um palíndromo: ");
    fgets(frase,tam,stdin);
    frase[strlen(frase)- 1]  = '\0';
    inverter(frase,frase2,aux);
    printf("String normal: \n");
    removerEspaco(frase);
    puts(frase);
    printf("String invertida: \n");
    removerEspaco(frase2);
    puts(frase2);
    if(strcmp(frase,frase2) == 0){
        printf("É palindromo\n");
    }
    else{
        printf("Não é palindromo\n");
    }
}   