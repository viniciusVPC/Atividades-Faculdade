/*  C�digo de ordena��o Escrito em C
    Autor: Vin�cius Pereira da Costa
    Ci�ncia da Computa��o
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

    printf("Prontinho! O seu vetor foi organizado de forma crescente!\nA� est� ele:\n\n| ");
    for(int i = 0; i < 10; i++){
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
        printf("Prontinho! O seu vetor foi organizado de forma decrescente!\nA� est� ele:\n\n| ");
        for(int i = 0; i < 10; i++){
        printf("%d | ", tempV[i]);
    }
    free(tempV);
}

int main(){
    setlocale(LC_ALL, "Portuguese");
    int vetor[] = {4, 9, 7, 8, 3, 1, 0, 5, 2, 6};
    int ordem = 0;
    printf("Seja bem vindo ao Ordenador de Vetores 3000!\nO vetor que vamos ordenar � o seguinte:\n\n| ");

    for(int i = 0; i < 10; i++){
        printf("%d | ", vetor[i]);
    }
    printf("\n\nSelecione se voc� quer orden�-lo de forma Crescente ou Decrescente!\n|1| - Crescente\n|2| - Decrescente\n");
    scanf("%d", &ordem);
    if(isdigit(ordem)) printf("� um n�mero");
    else printf("N�o � um n�mero");
    printf("\n");

    if(ordem == 1){
        Crescente(vetor, 10);
    }
    else if(ordem == 2){
        Decrescente(vetor, 10);
    }
    else{
    printf("Desculpa. Algo deu errado.");
    }

    printf("\n");
    free(vetor);
    free(ordem);
    return 0;
}
