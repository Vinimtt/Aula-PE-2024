#include <stdio.h>

void insertion_sort(int v[], int qtd);
void imprimirVetor(int v[], int qtd);

int main() {
    int qtd;
    printf("Informe a quantidade de elementos no vetor: ");
    scanf("%d", &qtd);
    int v[qtd];

    for (int i = 0; i < qtd; ++i) {
        printf("Informe o %dº valor do vetor: ", i + 1);
        scanf("%d", &v[i]);
    }

    printf("O vetor original é: ");
    imprimirVetor(v, qtd);

    insertion_sort(v, qtd);

    printf("O vetor após a ordenação é: ");
    imprimirVetor(v, qtd);

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

void insertion_sort(int v[], int qtd) {
    int atual, j;
    for (int i = 1; i < qtd; ++i) {
        atual = v[i];
        j = i - 1;
        while (j >= 0 && atual < v[j]) {
            v[j + 1] = v[j];
            j = j - 1;
        }
        v[j + 1] = atual;
    }
}
