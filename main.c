#include <stdio.h>
#include <stdlib.h>
#include<math.h>
#include "pratica_2.h"

int main()
{
    Lista* l;

    l = lst_cria();



    if(lst_vazia(l)==0)
        printf("Lista esta vazia\n");

    /*if(lst_vazia(l2)==0)
        printf("Lista esta vazia\n");*/



    l = lst_insere(l, 2);
    l = lst_insere(l, 3);
    l = lst_insere(l, 4);



    printf("A Lista 1 inserida eh:\n\n");
    lst_imprime(l);

    lista_imprime_quant(l,1);

    printf("\n\nO ultimoelemento eh: \n\n");
    lst_imprime_rec(l);


    return 0;
}

