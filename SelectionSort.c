#include <stdio.h>

void imprimir_array(int * array, int n);

void selection_sort(int * array, int init, int final);

int main(){

    //Selection Sort

    int array[] = {2, 12, -1, -4, 5, 90, 3, 27};

    int len = sizeof(array) / sizeof(array[0]);

    printf("Algoritmos de Ordenacao -> Selection Sort\n");
    
    selection_sort(array, 0, len-1);

    imprimir_array(array, len);

    return 0;
}


void selection_sort(int * array, int init, int final){
    int min = array[init];
    int aux = init;
    if(init < final){
        for(int i = init + 1; i <= final; i++){
            if(min > array[i]){
                min = array[i];
                aux = i;
            }
        }

        array[aux] = array[init];
        array[init] = min;
        selection_sort(array, init + 1, final);
    }
}

void imprimir_array(int * array, int n){
    
    printf("Array = ");

    for(int i = 0; i < n; i++){
        printf("%d ", *(array + i));
    }

    printf("\n");

}