#include <stdio.h>

void troca(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partir(int tam[], int men, int mai) {
    int pivot = tam[mai];
    int i = (men - 1);

    for (int j = men; j <= mai - 1; j++) {
        if (tam[j] < pivot) {
            i++;
            troca(&tam[i], &tam[j]);
        }
    }
    troca(&tam[i + 1], &tam[mai]);
    return (i + 1);
}

void quickSort(int tam[], int men, int mai) {
    if (men < mai) {
        int pi = partir(tam, men, mai);

        quickSort(tam, men, pi - 1);
        quickSort(tam, pi + 1, mai);
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
