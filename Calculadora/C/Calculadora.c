/*  C�digo de calculadora Escrito em C
    Autor: Vin�cius Pereira da Costa
    Ci�ncia da Computa��o
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
            printf("Imposs�vel dividir por zero.\nSeu computador entrar� em combust�o dentro de 3 segundos.");
            return 0;
    }
}

int main(){
    setlocale(LC_ALL, "Portuguese");
    int numeroA, numeroB, operacao;
    float resultado = 0;
    bool erro = false;
    printf("Seja bem vindo � Calculadora Bacanuda 3000!\n\n");
    printf("Para come�ar, digite o primeiro n�mero: ");
    scanf("%d", &numeroA);

    do{
        printf("\nAgora selecione qual ser� a opera��o a ser realizada!\n");
        printf("|1| - Soma\n|2| - Subtra��o\n|3| - Multiplica��o\n|4| - Divis�o\nOpera��o selecionada: ");
        scanf("%d", &operacao);
        if(operacao >= 5 || operacao == 0){
                printf("A opera��o inserida n�o existe.");
                erro = true;
        }
        else erro = false;
    }
    while(erro);


    printf("\nFinalmente, digite o segundo n�mero: ");
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
        printf("Opera��o inv�lida.");
        break;
    }


    printf("\nO resultado da sua opera��o �: %f", resultado);

    return 0;
}



