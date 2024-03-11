#include <stdio.h>

void imprimirVetor(int v[], int qtd);

int main(){
int qtd;
int max = 0;
int min = 0;
printf("Informe o tamanho do vetor: ");
scanf("%d", &qtd);
int vetor[qtd];
int vetor2[qtd];
int tempo[qtd];

for(int i = 0; i<qtd; ++i){
    printf("Informe o %dº número do vetor: ",i+1);
    scanf("%d",&vetor[i]);
}
for (int i = 0; i < qtd; ++i) {
    if (vetor[i] < vetor[min]) {
      min = i;
    } else if (vetor[i] > vetor[max]) {
      max = i;
    }
  }
printf("O valor máximo desse vetor é %d\n", vetor[max]);
printf("O valor minímo desse vetor é:%d\n ",vetor[min]);
for(int i =0;i<qtd; ++i){
  vetor2[i]= vetor[qtd-i-1];
}

for(int i = 0; i<qtd;++i){
  tempo[i] = vetor[qtd-i-1];
}
for(int i = 0;i <qtd; ++i){
  vetor[i] = tempo[i];
}

printf("Vetor invertido = ");
//para mudar o vetor printado, só remover ou adicionar o 2;
imprimirVetor(vetor2,qtd);
return 0;
}

void imprimirVetor(int v[], int qtd) {
  printf("[");
  if (qtd > 0) {
    printf("%d", v[0]);
    for (int i = 1; i < qtd; ++i) {
      printf(", %d", v[i]);
    }
  }
  printf("]\n");
}