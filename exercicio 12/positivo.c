#include <stdio.h>
#include <locale.h>

main()
{
    int post = 0;
    float media, i=0, valor;

    setlocale(LC_ALL,"");
    do
    {
        printf("digite o %0.fº numero: ",i+1);
        scanf("%d",&valor);
        if(valor >=0)
        {
            post = post + valor;
            i++;
            printf("%f",post);
        }
    }
    while(valor >=0);
    if(i!=0)
    {
        media = post/i;

        printf("\na media dos numeros positivos é: %.2f",media);
    }
    else
        printf("nenhuma media encontrada");

}

