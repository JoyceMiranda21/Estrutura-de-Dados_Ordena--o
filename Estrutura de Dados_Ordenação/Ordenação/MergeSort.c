#include <stdio.h>

void merge(int tam[], int esq, int meio, int dir) {
    int n1 = meio - esq + 1;
    int n2 = dir - meio;

    int L[n1], R[n2];

    for (int i = 0; i < n1; i++)
        L[i] = tam[esq + i];
    for (int i = 0; i < n2; i++)
        R[i] = tam[meio + 1 + i];

    int i = 0, j = 0, k = esq;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            tam[k] = L[i];
            i++;
        } else {
            tam[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        tam[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) {
        tam[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(int tam[], int esq, int dir) {
    if (esq < dir) {
        int meio = esq + (dir - esq) / 2;

        mergeSort(tam, esq, meio);
        mergeSort(tam, meio + 1, dir);

        merge(tam, esq, meio, dir);
    }
}

int main() {
    int tam[6] = {34, 12, 56, 78, 1, 9};
    int n = 6;

    mergeSort(tam, 0, n - 1);

    printf("vetor ordenado: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", tam[i]);
    }
    return 0;
}
