#include <stdio.h>

main()
{
    int a[6];

    for(int i =0;i<6;i++){
        printf("digite o %i numero: ", i+1);
        scanf("%i", &a[i]);
    }
    printf("\n");
    for(int i = 5; i>=0;i--){
        printf(" %i ",a[i]);
    }

}
