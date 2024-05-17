//Arquivo C
#include<stdlib.h>

int intercala(int p, int q, int r, int v[]){
    int i, j, k, *w;
    w = malloc((r-p)*sizeof(int));
    for(i = 0, k = p; k < q; i++, k++)
        w[i] = v[k];
    for(j = r-p-1; k<r; j--, k++)
        w[j] = v[k];
    i = 0; j = r-p-1;
    for(k = p; k < r; k++)
        if(w[i] <= w[j])
            v[k] = w[i++];
        else v[k] = w[j--];
    free(w);
}

void mergeSort(int p, int r, int v[]){
    if(p < r-1){
        int q = (p+r)/2;
        mergeSort(p, q, v);
        mergeSort(q, r, v);
        intercala(p, q, r, v);
    }
}

int main(){
    int vetor[] = {11, 33, 55, 77, 22, 44, 66, 88, 110};
    mergeSort(0, 9, vetor);
    for(int i = 0; i<9; i++){
        printf("%d , ", vetor[i]);
    }
    return 0;
}
