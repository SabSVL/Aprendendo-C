#include <stdio.h>
#include <Windows.h>

main()
{
    int mim, seg, h;

    for(h = 0; h<=6;h++){
        for(mim = 0; mim <=60;mim++){
            for(seg = 0; seg <=60;seg++){
                printf(" %i:%i:%i",h,mim,seg);
                Sleep(1000);
                system("cls");


            }
        }
    }

}
