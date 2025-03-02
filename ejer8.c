// Intercambio de Valores
#include <stdio.h>

void intercambiar(int *a, int *b) {
    *a = *a + *b;   
    *b = *a - *b;   
    *a = *a - *b;   
}

int main() {
    int arr[] = {5, 10};

    printf("Antes del intercambio: arr[0] = %d, arr[1] = %d\n", arr[0], arr[1]);
    intercambiar(&arr[0], &arr[1]);
    printf("Despues del intercambio: arr[0] = %d, arr[1] = %d\n", arr[0], arr[1]);
    return 0;
}
