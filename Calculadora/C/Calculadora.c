/*  Código de calculadora Escrito em C
    Autor: Vinícius Pereira da Costa
    Ciência da Computação
    Anhembi Morumbi                     */

#include <stdio.h>
#include <stdbool.h>
#include <locale.h>

int Soma(int numA, int numB){
    return numA + numB;
}

int Subtrai(int numA, int numB){
    return numA - numB;
}

int Multiplica(int numA, int numB){
    return numA * numB;
}

float Divide(int numA, int numB){
    if(numB != 0) return numA / numB;
    else{
            printf("Impossível dividir por zero.\nSeu computador entrará em combustão dentro de 3 segundos.");
            return 0;
    }
}

int main(){
    setlocale(LC_ALL, "Portuguese");
    int numeroA, numeroB, operacao;
    float resultado = 0;
    bool erro = false;
    printf("Seja bem vindo à Calculadora Bacanuda 3000!\n\n");
    printf("Para começar, digite o primeiro número: ");
    scanf("%d", &numeroA);

    do{
        printf("\nAgora selecione qual será a operação a ser realizada!\n");
        printf("|1| - Soma\n|2| - Subtração\n|3| - Multiplicação\n|4| - Divisão\nOperação selecionada: ");
        scanf("%d", &operacao);
        if(operacao >= 5 || operacao == 0){
                printf("A operação inserida não existe.");
                erro = true;
        }
        else erro = false;
    }
    while(erro);


    printf("\nFinalmente, digite o segundo número: ");
    scanf("%d", &numeroB);

    switch(operacao){
    case 1:
        resultado = Soma(numeroA, numeroB);
        break;
    case 2:
        resultado = Subtrai(numeroA, numeroB);
        break;
    case 3:
        resultado = Multiplica(numeroA, numeroB);
        break;
    case 4:
        resultado = Divide(numeroA, numeroB);
        break;
    default:
        printf("Operação inválida.");
        break;
    }


    printf("\nO resultado da sua operação é: %f", resultado);

    return 0;
}



