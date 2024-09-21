#include <stdio.h>

void bubbleSort(int tam[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (tam[j] > tam[j + 1]) {
                int aux = tam[j];
                tam[j] = tam[j + 1];
                tam[j + 1] = aux;
            }
        }
    }
}

int main() {
    int arr[6] = {10, 6, 9, 7, 8, 11};
    int n = 6;

    bubbleSort(arr, n);

    printf("vetor ordenado: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
