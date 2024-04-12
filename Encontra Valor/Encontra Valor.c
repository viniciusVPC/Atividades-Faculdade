//Encontrar valor em Array Crescente
#include<stdio.h>
#include <locale.h>

int encontra(int valor, int *vetor){
    int i = 0;
    while(vetor[i] < valor) i++;
    if(vetor[i] == valor)return i;
    else return -1;
}

void imprimeVetor(int *vetor, int tamanho){
    for(int i = 0; i < tamanho; i++) printf("%d | ", vetor[i]);
}

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int vetor[] = {12, 20, 25, 35, 38, 40, 44, 50, 55, 65, 99};
    printf("O vetor é o seguinte: \n\n| ");
    imprimeVetor(vetor, 11);
    int valor;
    printf("\n\nDigite o número a procurar: ");
    if(scanf("%d", &valor)){
        printf("\nO índice do valor %d é %d\n\n", valor, encontra(valor, vetor));
    }
    else printf("\nIsso não é um número, mané\n\n");
    return 0;
}
