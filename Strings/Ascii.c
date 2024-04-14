#include <stdio.h>
#include <string.h>
#define tam 50


int main(){
char string[tam];
printf("Informe a string: ");
fgets(string,tam,stdin);
string[strlen(string) - 1] = '\0';
for(int i = 0; i < strlen(string); ++i){
    printf("o valor ascii de %c é: %d\n",string[i],string[i]);

}



}