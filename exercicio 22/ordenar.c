#include <stdio.h>
#include <locale.h>

main()
{
    int num[10],i=0, aux;
    setlocale(LC_ALL,"");

    do
    {
        printf("Digite o %i� n�mero: ", i+1);
        scanf("%i", &num[i]);
        i++;

        for(int a=0; a<i; a++)
        {
            for(int b=a; b<i; b++)
            {
                if(num[a]>num[b])
                {
                    aux=num[a];
                    num[a]=num[b];
                    num[b]=aux;
                }
            }
        }
    }while(i<10);

    for(int i=0; i<10; i++)
    {
        printf("O %i� �: %i\n", i+1, num[i]);
    }
}
