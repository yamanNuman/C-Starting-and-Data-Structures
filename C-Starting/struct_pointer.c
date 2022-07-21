#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

typedef struct{

    int yas;
    enum {bay,bayan} cinsiyet;

}insan;

int emeklimi(insan *birey); //typedef ustune tanımlarsak olmaz.

int main()
{
    insan ali;
    insan *veli; //struct pointeri tanımladik.
    veli = (insan*) malloc(sizeof(insan)); //dinamik bellek insan struct yapısı boyutunda bellekte yer ayırdık.
    veli -> yas = 40; //struct pointerlarinda -> isareti ile normal struct ile veli.yas seklinde .(nokta ) kullanılmalı.
    veli -> cinsiyet = bayan;

    ali.yas = 56;
    ali.cinsiyet = bay;

    printf("Alinin yasi : %d",ali.yas);
    printf("\nAlinin cinsiyeti : %u",ali.cinsiyet);
    printf("\nVelinin yasi : %d",veli->yas);
    printf("\nVelinin cinsiyeti : %u",veli->cinsiyet);

    printf("\nVeli Emekli olabilir mi ? : %d",emeklimi(veli));
    printf("\nAli Emekli Olabilir Mi ? : %d",emeklimi(&ali)); // ali pointer olmadıgı icin &ile gondermemiz gerekiyor fonksiyona.

    getch();
}

int emeklimi(insan *birey) //pointerı fonksiyona gönderip islem yaptirdik.
{
    printf("\n %d %u",birey->yas,birey->cinsiyet); //debug ettik buraya bireyin yasi ve cinsiyeti ne geliyor ne donuyor diye kontrol ettik.
    fflush(stdout);
    perror("gecti");
    if(birey->cinsiyet == bay && birey->yas > 55)
    {
        return 1;
    }
    if(birey->cinsiyet == bayan && birey->yas > 50)
    {
        return 1;
    }

    return 0;
}