#include <stdio.h>
#include <locale.h>

main()
{
    int maior, menor, media, valor, soma;
    setlocale(LC_ALL,"");
    printf("Digite o 1º valor: ");
    scanf("%i",&valor);
    maior = valor;
    menor = valor;
    soma = valor;
    for(int i = 1; i<20;i++)
    {
        printf("Digite o %iº valor: ", i+1);
        scanf("%i",&valor);

        if(maior<valor){
            maior = valor;
        }else if(menor>valor){
            menor = valor;
        }
        soma += valor;
    }
    media = soma/20;
    printf("\nA Media: %i \nO Menor: %i \nO Maior: %i",media, menor, maior);

}
