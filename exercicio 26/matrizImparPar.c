#include<stdio.h>

 main()
{
    int a[5][5];

    for(int l=0; l<4; l++)
    {
        for(int c=0; c<4; c++)
        {
            printf("Digite o valor de [%i][%i]: ",l,c);
            scanf("%i", &a[l][c]);
            if( a[l][c]%2==0 )
            {
                a[l][c] -= 1 ;
            }
            else
                a[l][c] += 1;
        }
    }
    for(int l=0; l<4; l++)
    {
        for(int c=0; c<4; c++)
        {
            printf("\nA[%i][%i]= %i",l,c,a[l][c]);

        }
    }
}
