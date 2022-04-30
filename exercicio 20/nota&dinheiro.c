#include <stdio.h>

main()
{
    int valor, m100=0, m50=0, m20=0, m10=0, m5=0, m2=0, m1=0;
    do
    {
        printf("Digite um valor: ");
        scanf("%i",&valor);
    }
    while (valor <=0);

    while(valor >= 100)
    {
        valor = valor - 100;
        m100++;

    }
    while(valor >= 50)
    {
        valor = valor - 50;
        m50++;

    }
    while(valor >= 20)
    {
        valor = valor - 20;
        m20++;

    }
    while(valor >= 10)
    {
        valor = valor - 10;
        m10++;
    }
    while(valor >= 5)
    {
        valor = valor - 5;
        m5++;
    }
    while(valor >= 2)
    {
        valor = valor - 2;
        m2++;

    }
    while(valor >= 1)
    {
        valor = valor - 1;
        m1++;
    }
    if(m100>0)
    printf("\n%i de R$100",m100);
    if(m50>0)
    printf("\n%i de R$50",m50);
    if(m20)
    printf("\n%i de R$20",m20);
    if(m10>0)
    printf("\n%i de R$10",m10);
    if(m5>0)
    printf("\n%i de R$5",m5);
    if(m2>0)
    printf("\n%i de R$2",m2);
    if(m1>0)
    printf("\n%i de R$1",m1);

}
