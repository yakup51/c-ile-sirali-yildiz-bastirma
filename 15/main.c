#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi,sutun,satir;
    printf("HOSGELDINIZ..:):)\n");
    printf("KAC SATIR YILDIZ BASTIRMAK ISTERSINIZ?=\n");
    scanf("%d",&sayi);

    for(satir=1;satir<=sayi;satir++){
        for(sutun=1;sutun<=satir;sutun++){
                printf("*");
        }
        printf("\n");
    }
    printf("\n");

    for(satir=1;satir<=sayi;satir++){
        for(sutun=sayi-satir;sutun>=0;sutun--){
                printf("*");

        }
        printf("\n");
    }



    return 0;
}
