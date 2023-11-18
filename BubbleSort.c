#include <stdio.h>

void imprimir_array(int * array, int n);

void bubble_sort(int * array, int init, int final);

int main(){

    //Bubble Sort

    int array[] = {2, 12, -1, -4, 5, 90, 3, 27, -100, 200, 21};

    int len = sizeof(array) / sizeof(array[0]);

    printf("Algoritmos de Ordenacao -> Bubble Sort\n");

    bubble_sort(array, 0, len-1);

    imprimir_array(array, len);
}

void bubble_sort(int * array, int init, int final){
    int aux = 0;
    if(init < final){
        for(int i = init; i < final; i++){
            if(array[i] > array[i + 1]){
                aux = array[i + 1];
                array[i + 1] = array[i];
                array[i] = aux;
            }
        }

        bubble_sort(array, init, final - 1);
    }
}

void imprimir_array(int * array, int n){
    
    printf("Array = ");

    for(int i = 0; i < n; i++){
        printf("%d ", *(array + i));
    }

    printf("\n");

}