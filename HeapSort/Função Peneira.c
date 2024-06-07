//HeapSort
//Primeiro organiza a arvore em um Max-Heap (os valores menores ficam abaixo dos maiores)
//Depois, coloca o valor 1 no último valor. Peneira o novo valor 1 excluindo o último
//Repete isso com o novo último valor até todos estarem organizados.

#include <stdio.h>

void peneira(int i, int m, int v[])
{
    int temp, select = 0;
    do
    {
        if(i*2 <= m && i*2+1 <=m)
        {
            if(v[i*2] >= v[i*2+1])
                select = i*2;
            else select = i*2+1;
        }
        else select = 0;
        if(v[select] >= v[i])
        {
            temp = v[select];
            v[select] = v[i];
            v[i] = temp;
            i = select;
        }
        else select = 0;
    }
    while(select != 0);
}

void heapSort(int n, int v[])
{
    int i, x;
    for(int i = n/2; i>=1; i--)
        peneira(i, n, v);

    for(i = n; i > 1; i--)
    {
        x = v[i];
        v[i]=v[1];
        v[1]=x;
        peneira(1, i-1, v);
    }
}

int main()
{
    int v[] = {0, 17, 21, 13, 14, 15, 10, 46, 41, 23, 30, 34, 12};
    int m = 12;

    heapSort(m, v);

    for(int j = 1; j <= m ; j++)
    {
        printf("%d | ", v[j]);
    }
    return 0;
}

