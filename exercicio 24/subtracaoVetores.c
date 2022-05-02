#include <stdio.h>
#include <locale.h>

main()
{
    int a[10], b[10], c[10];
    setlocale(LC_ALL,"");

    for(int i = 0; i<5; i++){
        printf("\ndigite o %iº numero do vetor A: ", i+1);
        scanf("%i",&a[i]);

        printf("digite o %iº numero do vetor B: ", i+1);
        scanf("%i",&b[i]);

        c[i] = a[i]-b[i];
    }
    for(int i = 0; i<5;i++){
        printf("\n%i - %i = %i", a[i], b[i],c[i]);
    }
}
