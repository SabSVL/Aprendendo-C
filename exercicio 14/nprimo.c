#include <stdio.h>
#include <locale.h>

main()
{
    setlocale(LC_ALL,"");
    int valor, cont=0;
    printf("Digite um numero: ");
    scanf("%i",&valor);

    for (int i = 1; i <= valor; i++) {
    if (valor % i == 0) {
     cont++;
    }
    }
    if(cont == 2){
        printf("\n O numero %i é primo.\n",valor);
    }
    else{
        printf("\n O numero %i não é primo.\n", valor);
    }
}
