#include <stdio.h>

void selectionSort(int tam[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int sel = i;
        for (int j = i + 1; j < n; j++) {
            if (tam[j] < tam[sel]) {
                sel = j;
            }
        }
        int aux = tam[sel];
        tam[sel] = tam[i];
        tam[i] = aux;
    }
}

int main() {
    int tam[6] = {34, 12, 56, 78, 1, 9};
    int n = 6;

    selectionSort(tam, n);

    printf("tamay ordenado: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", tam[i]);
    }
    return 0;
}
