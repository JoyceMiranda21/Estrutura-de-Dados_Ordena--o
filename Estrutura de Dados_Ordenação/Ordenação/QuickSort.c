#include <stdio.h>

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int tam[], int low, int high) {
    int pivot = tam[high];
    int i = (low - 1);

    for (int j = low; j <= high - 1; j++) {
        if (tam[j] < pivot) {
            i++;
            swap(&tam[i], &tam[j]);
        }
    }
    swap(&tam[i + 1], &tam[high]);
    return (i + 1);
}

void quickSort(int tam[], int low, int high) {
    if (low < high) {
        int pi = partition(tam, low, high);

        quickSort(tam, low, pi - 1);
        quickSort(tam, pi + 1, high);
    }
}

int main() {
    int tam[6] = {4, 19, 56, 55, 0, 7};
    int n = 6;

    quickSort(tam, 0, n - 1);

    printf("vetor ordenado: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", tam[i]);
    }
    return 0;
}
