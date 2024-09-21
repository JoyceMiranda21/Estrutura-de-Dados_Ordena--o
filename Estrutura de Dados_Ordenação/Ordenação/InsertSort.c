#include <stdio.h>

void insertionSort(int tam[], int n) {
    for (int i = 1; i < n; i++) {
        int chave = tam[i];
        int j = i - 1;

        while (j >= 0 && tam[j] > chave) {
            tam[j + 1] = tam[j];
            j = j - 1;
        }
        tam[j + 1] = chave;
    }
}

int main() {
    int tam[6] = {3, 12, 5, 7, 1, 2};
    int n = 6;

    insertionSort(tam, n);

    printf("vetor ordenado: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", tam[i]);
    }
    return 0;
}
