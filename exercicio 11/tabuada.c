#include <stdio.h>
#include <locale.h>

main()
{
    setlocale(LC_ALL,"");

    for(int t = 1; t<=9; t++)
    {
        printf("\nTabuada do %i\n",t);
        for(int i = 0; i<=10; i++)
        {
            printf("%i x %i = %i\n",t, i, t*i);
        }
    }
}
