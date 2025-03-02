// 9. Suma con Apuntadores
#include <stdio.h>

int sumaArreglo(int *arr, int tamaño) {
    int suma=0;
    for (int i=0; i<tamaño; i++) {
        suma += *(arr + i);
    }
    return suma;
}

int main() {
    int numeros[]= {1, 2, 3, 4, 5};
    int tamaño=sizeof(numeros) / sizeof(numeros[0]);
    int resultado=sumaArreglo(numeros, tamaño);
    printf("La suma de los elementos del arreglo es: %d\n", resultado);
    return 0;
}
