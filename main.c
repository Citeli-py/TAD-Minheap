#include <stdio.h>
#include <stdlib.h>
#include "minheap.h"

void print_info(void* info)
{
    char *x = (char*) malloc(sizeof(char));
    x = (char*) info;
    printf("info: %c\n\n", *x);
}

int main()
{
    char *a = "Estrutura de dados";
    char b;
    int j;

    Heap h = inicializar();
    for(int i=0; i<17; i++)
        inserir(h, i, &a[i], sizeof(char));

    print(h, print_info);

    for(int i=0; i<9; i++)
    {
        remover(h, &j, &b, sizeof(char));
        printf("Removido: chave %d -> %c \n", j, b);
    }
    printf("\n");

    print(h, print_info);

    destruir(h);
    return 0;
}
