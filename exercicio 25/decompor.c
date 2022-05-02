#include <stdio.h>

main()
{
    int vetor[10], par[5], impar[5], aux=0;

    for(int i=0; i<10; i++)
    {
        printf("digite o %i numero: ", i+1);
        scanf("%i",&vetor[i]);
    }
    for(int cont=0; cont<10; cont++)
    {

        if(cont%2==0)
        {
            par[aux]= vetor[cont];
            printf("\nVetor par: %i", par[aux]);
        }
        else
        {
            impar[aux]= vetor[cont];
            printf("\tVetor impar: %i", impar[aux]);

        }
        aux++;
    }
}
