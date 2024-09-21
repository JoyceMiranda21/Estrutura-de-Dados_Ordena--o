#include <stdio.h>

void heapify(int tam[], int n, int i) {
    int maior = i;
    int esq = 2 * i + 1;
    int dir = 2 * i + 2;

    if (esq < n && tam[esq] > tam[maior])
        maior = esq;

    if (dir < n && tam[dir] > tam[maior])
        maior = dir;

    if (maior != i) {
        int temp = tam[i];
        tam[i] = tam[maior];
        tam[maior] = temp;

        heapify(tam, n, maior);
    }
}

void heapSort(int tam[], int n) {
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(tam, n, i);

    for (int i = n - 1; i > 0; i--) {
        int temp = tam[0];
        tam[0] = tam[i];
        tam[i] = temp;

        heapify(tam, i, 0);
    }
}

int main() {
    int tam[6] = {34, 12, 56, 78, 1, 9};
    int n = 6;

    heapSort(tam, n);

    printf("vetor ordenado: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", tam[i]);
    }
    return 0;
}
