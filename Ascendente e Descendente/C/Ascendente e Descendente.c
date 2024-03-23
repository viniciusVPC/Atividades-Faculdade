/*  Código de ordenação Escrito em C
    Autor: Vinícius Pereira da Costa
    Ciência da Computação
    Anhembi Morumbi

    Vetor Base: 4978310526          */

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>

void Crescente(int v[], int tamanho){
    int tempV[tamanho];
    for(int i = tamanho-1; i >= 0; i--){
        int valorMaior = i;
        for(int j = i-1; j>=0; j--){
            if(v[j] > v[valorMaior])
                valorMaior = j;
        }
        tempV[i] = v[valorMaior];
        v[valorMaior] = v[i];
        v[i] = -1;
    }

    printf("Prontinho! O seu vetor foi organizado de forma crescente!\nAí está ele:\n\n| ");
    for(int i = 0; i < tamanho; i++){
        printf("%d | ", tempV[i]);
    }
    free(tempV);
}

void Decrescente(int v[], int tamanho){
    int tempV[tamanho];
    for(int i = 0; i < tamanho; i++){
        int valorMaior = i;
        for(int j = i+1; j<tamanho; j++){
            if(v[j] > v[valorMaior])
                valorMaior = j;
        }
        tempV[i] = v[valorMaior];
        v[valorMaior] = v[i];
        v[i] = -1;
    }
        printf("Prontinho! O seu vetor foi organizado de forma decrescente!\nAí está ele:\n\n| ");
        for(int i = 0; i < tamanho; i++){
        printf("%d | ", tempV[i]);
    }
    free(tempV);
}


int main(){
    setlocale(LC_ALL, "Portuguese");
    int *vetor;
    int ordem = 0, tamanhoVetor;
    bool erro = false;

    do{
        printf("Sem mais delongas, insira o tamanho que você quer que o seu vetor tenha: ");
        if(scanf("%d", &tamanhoVetor)){
            erro = false;
        }
        else{
            printf("Por favor, insira um número!!!\n");
            fflush(stdin);
            erro = true;
        }
    }
    while(erro);
    vetor = (int *)malloc(tamanhoVetor * sizeof(int));
    for(int i = 0; i < tamanhoVetor; i++){
    printf("Insira o valor do %do elemento do seu vetor: ", i+1);
    scanf("%d", &vetor[i]);
    }

    printf("\nLegal, vamos ver como ficou o seu vetor: \n\n| ");
    for(int i = 0; i < tamanhoVetor; i++){
        printf("%d | ", vetor[i]);
    }

    do{
        erro = false;
        printf("\n\nAgora, selecione se você quer ordená-lo de forma Crescente ou Decrescente!\n|1| - Crescente\n|2| - Decrescente\n");
        scanf("%d", &ordem);
        if(ordem == 1 || ordem == 2){
            erro = false;
        }
        else {
            printf("Por favor, digite um valor numérico dentro das opções disponíveis.\n");
            fflush(stdin);
            erro = true;
        }
    }
    while(erro);

    printf("\n");

    if(ordem == 1){
        Crescente(vetor, tamanhoVetor);
    }
    else if(ordem == 2){
        Decrescente(vetor, tamanhoVetor);
    }
    else{
    printf("Desculpa. Algo deu errado.");
    }

    printf("\n");
    free(vetor);
    free(ordem);
    return 0;
}
