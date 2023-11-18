#include <stdio.h>

void insertion_sort(int * array, int n);

void imprimir_array(int * array, int n);

int main(){

    //Insertion Sort

    int array[] = {2, 12, -1, -4, 5, 90, 3, 27};

    int len = sizeof(array)/sizeof(array[0]);

    printf("Algoritmo de Ordenacao -> Insertion Sort\n");

    insertion_sort(array, len);

    imprimir_array(array, len);

    return 0;
}

void insertion_sort(int * array, int n){
    int v, j;
    if(n > 1){
        insertion_sort(array, n - 1);
        v = array[n-1];
        j = n - 1;
        while((j > 0) && (array[j-1] > v)){
            array[j] = array[j-1];
            j--;
        }
        array[j] = v;
    }
}

void imprimir_array(int * array, int n){
    
    printf("Array = ");

    for(int i = 0; i < n; i++){
        printf("%d ", *(array + i));
    }

    printf("\n");

}
