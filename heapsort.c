#include <stdio.h>

void descerHeap(int arr[], int n, int i) {
    int maior = i;
    int esquerda = 2 * i + 1;
    int direita = 2 * i + 2;
 
    if (esquerda < n && arr[esquerda] > arr[maior]) {
        maior = esquerda;
    }
 
    if (direita < n && arr[direita] > arr[maior]) {
        maior = direita;
    }
 
    if (maior != i) {
        int temp = arr[i];
        arr[i] = arr[maior];
        arr[maior] = temp;
 
        descerHeap(arr, n, maior);
    }
}

void construirHeapMax(int arr[], int n) {
    for (int i = n / 2 - 1; i >= 0; i--) {
        descerHeap(arr, n, i);
    }
}

void heapsort(int arr[], int n) {
    construirHeapMax(arr, n);
 
    for (int i = n-1; i >= 1; i--) {
        int temp = arr[0];
        arr[0] = arr[i];
        arr[i] = temp;
 
        n--;
        descerHeap(arr, n, 0);
    }
}

int main() {
    int arr[] = {12, 11, 13, 5, 6, 7};
    int n = sizeof(arr)/sizeof(arr[0]);
 
    printf("Array original:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
 
    heapsort(arr, n);
 
    printf("Array ordenado:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
 
    return 0;
}
