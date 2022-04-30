#include <stdio.h>

main() {
int h, mim, seg;

printf("digite o tempo em segundos: ");
scanf("%i",&seg);
h = seg/3600;
mim = (seg%3600)/60;
seg = seg%60;

printf("\n%ih: %imin: %iseg", h,mim,seg);

}
