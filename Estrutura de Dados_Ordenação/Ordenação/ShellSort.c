#include <stdio.h>

void shellSort(int tam[], int n) {
    for (int s = n / 2; s > 0; s /= 2) {
        for (int i = s; i < n; i++) {
            int aux = tam[i];
            int j;
            for (j = i; j >= s && tam[j - s] > aux; j -= s) {
                tam[j] = tam[j - s];
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
