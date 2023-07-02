#include <stdio.h>

void merge(int *v, int inicio, int meio, int fim) {
    int i = inicio, j = meio, k = 0;
    int aux[fim - inicio];

    while (i < meio && j < fim) {
        if (v[i] <= v[j]) {
            aux[k] = v[i];
            i++;
        } else {
            aux[k] = v[j];
            j++;
        }
        k++;
    }

    while (i < meio) {
        aux[k] = v[i];
        i++;
        k++;
    }

    while (j < fim) {
        aux[k] = v[j];
        j++;
        k++;
    }

    for (i = inicio, k = 0; i < fim; i++, k++) {
        v[i] = aux[k];
    }
}

void sort(int inicio, int fim, int *v) {
    if (fim - inicio > 1) {
        int meio = (fim + inicio) / 2;
        sort(inicio, meio, v);
        sort(meio, fim, v);
        merge(v, inicio, meio, fim);
    }
}

int main() {
    int v[4] = {3, 4, 5, 1};
    sort(0, 4, v);

    for (int i = 0; i < 4; i++) {
        printf("No indice %d o valor é: %d \n", i, v[i]);
    }

    return 0;
}
