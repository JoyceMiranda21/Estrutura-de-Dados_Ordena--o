#include <stdio.h>

void shellSort(int tam[], int n) {
    for (int gap = n / 2; gap > 0; gap /= 2) {
        for (int i = gap; i < n; i++) {
            int aux = tam[i];
            int j;
            for (j = i; j >= gap && tam[j - gap] > aux; j -= gap) {
                tam[j] = tam[j - gap];
            }
            tam[j] = aux;
        }
    }
}

int main() {
    int tam[6] = {9, 12, 6, 8, 1, 9};
    int n = 6;

    shellSort(tam, n);

    printf("vetor ordenado: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", tam[i]);
    }
    return 0;
}
