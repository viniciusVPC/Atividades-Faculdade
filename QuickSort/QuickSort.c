//Algoritmo de ordenação por QuickSort escrito em C
#include<stdio.h>

int separar(int p, int r, int v[]){
int q = v[r-1];
int i = p-1;
for(int j = p; j < r; j++){
    if(v[j] <= q){
        int temp = v[++i];
        v[i] = v[j];
        v[j] = temp;
    }
}
return i;
}

void quickSort(int p, int r, int v[]){
    if(p<r-1){
        int q = separar(p, r, v);
        quickSort(p, q, v);
        quickSort(q+1, r, v);
    }
}

int main(){
    int v[] = {99, 33, 55, 77, 11, 22, 88, 66, 33, 44};
    quickSort(0, 10, v);
    for(int i = 0; i<10; i++){
        printf("%d , ", v[i]);
    }
return 0;
}
