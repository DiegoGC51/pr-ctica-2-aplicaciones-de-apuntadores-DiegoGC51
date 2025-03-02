// 11. Buscar en un Arreglo
#include <stdio.h>

int *buscarElemento(int *arr, int tamaño, int valor) {
    for (int i=0; i<tamaño; i++) {
        if (*(arr + i) == valor) {
            return arr+i;
        }
    }
    return NULL;
}

int main() {
    int arr[]= {10, 20, 30, 40, 50};
    int tamaño=sizeof(arr) / sizeof(arr[0]);
    int valorBuscado=30;

    int *direccion=buscarElemento(arr, tamaño, valorBuscado);
    if (direccion!=NULL) {
        printf("El valor %d se encuentra en la direcciOn de memoria: %p\n", valorBuscado, direccion);
    } else {
        printf("El valor %d no se encuentra en el arreglo.\n", valorBuscado);
    }

    return 0;
}
