#include <stdio.h>
#include <locale.h>

main()
{
    int a[10], neg=0,posit=0;

    setlocale(LC_ALL,"");
    for(int i = 0; i<10; i++)
    {
        printf("Digite o %iº numero: ",i+1);
        scanf("%i",&a[i]);

        if(a[i]<0)
            neg++;
        else
            posit += a[i];
    }
    printf("\n Quantidade de numeros negativos no vetor: %i\n",neg);
    printf(" Soma de todos os numeros positivos do vetor: %i\n",posit);

}
