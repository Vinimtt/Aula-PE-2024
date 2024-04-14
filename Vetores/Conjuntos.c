#include <stdio.h>

void imprimirVetor(int v[], int qtd);

int main() {
    int qtd1, qtd2, i, j, count = 0;
    printf("Informe o tamanho do vetor 1: ");
    scanf("%d", &qtd1);
    printf("Informe o tamanho do vetor 2: ");
    scanf("%d", &qtd2);
    int vetor1[qtd1], vetor2[qtd2];

    for (i = 0; i < qtd1; ++i) {
        printf("Informe o %dº valor: ", i + 1);
        scanf("%d", &vetor1[i]);
    }

    for (i = 0; i < qtd2; ++i) {
        printf("Informe o %dº valor: ", i + 1);
        scanf("%d", &vetor2[i]);
    }

    for (i = 0; i < qtd1; ++i) {
        for (j = 0; j < qtd2; ++j) {
            if (vetor1[i] == vetor2[j]) {
                count++;
                break;
            }
        }
    }

    int vetor3[qtd1 + qtd2 - count]; 
    int k = 0;

    for (i = 0; i < qtd1; ++i) {
        int repetido = 0;
        for (j = 0; j < k; ++j) {
            if (vetor1[i] == vetor3[j]) {
                repetido = 1;
                break;
            }
        }
        if (!repetido) {
            vetor3[k++] = vetor1[i];
        }
    }

    for (i = 0; i < qtd2; ++i){
        int repetido = 0;
        for (j = 0; j < k; ++j){
            if (vetor2[i] == vetor3[j]){
                repetido = 1;
                break;
            }
        }
        if (!repetido){
            vetor3[k++] = vetor2[i];
        }
    }
          
    int vetor5[qtd1 - count];
    int vetor6[qtd2 - count];
    int vetor4[count];
    int b = 0, c = 0, d = 0;

    for (i = 0; i < qtd1; ++i) {
        int repetido = 0;
        for (j = 0; j < qtd2; ++j) {
            if (vetor1[i] == vetor2[j]) {
                vetor4[b++] = vetor1[i];
                repetido = 1;
                break;
            }
        }
        if (!repetido) {
            vetor5[c++] = vetor1[i];
        }
    }

    for (i = 0; i < qtd2; ++i) {
        int repetido = 0;
        for (j = 0; j < qtd1; ++j) {
            if (vetor2[i] == vetor1[j]) {
                repetido = 1;
                break;
            }
        }
        if (!repetido) {
            vetor6[d++] = vetor2[i];
        }
    }

    printf("Vetor 1: ");
    imprimirVetor(vetor1, qtd1);
    printf("Vetor 2: ");
    imprimirVetor(vetor2, qtd2);
    printf("União: ");
    imprimirVetor(vetor3, k);
    printf("Interseção: ");
    imprimirVetor(vetor4, b);
    printf("A - B: ");
    imprimirVetor(vetor5, c);
    printf("B - A: ");
    imprimirVetor(vetor6, d);

    return 0;
}

void imprimirVetor(int vetor[], int qtd) {
    printf("[");
    if (qtd > 0) {
        printf("%d", vetor[0]);
        for (int i = 1; i < qtd; ++i) {
            printf(", %d", vetor[i]);
        }
    }
    printf("]\n");
}
