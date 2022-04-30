#include <stdio.h>
#include <locale.h>


main()
{
    //1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89

    setlocale(LC_ALL,"");
    int a=0, b = 1, c;
    printf(" Sequencia de Fibonacci:\n\n");
    for(int i = 0; i<6;i++){
        b = a + b;
        printf(" %i,",b);
        c = b + a;
        printf(" %i,",c);
        a = c;
    }
    printf("\n");
}
