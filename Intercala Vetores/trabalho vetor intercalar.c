//Arquivo C
int intercala(int v[], int p, int q, int r){
    int w[r-p];
    int x = r-p-1;
    for(int i = 0; i < q; i++){
        w[i] = v[i];
    }
    for(int i = q; i < r; i++){
        w[x] = v[i];
        x--;
    }

    int inicio = 0;
    int fim = r-p-1;
    x = 0;
    while(inicio < fim){
        if(w[inicio] < w[fim]){
           v[x] = w[inicio];
           inicio++;
        }
        else{
            v[x] = w[fim];
            fim--;
        }
        x++;
    }

    for(int i = 0; i<r;i++){
        printf("%d , ", v[i]);
    }
}

int main(){
    int vetor[] = {22, 33, 55, 77, 11, 44, 66, 88, 99};
    intercala(vetor, 0, 4, 9);
    return 0;
}
