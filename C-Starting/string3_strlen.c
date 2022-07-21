#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int my_strlen(char *);

int main(void)
{
    char *a = "Fuck the World !"; //string dizilerin sonuna otomatik olarak NULL karakteri atanir -> '\0'
    // int b;
    // b = strlen(a);

    // printf("String uzunlugu : %u",b);

    printf("Stringin uzunlugu : %d",my_strlen(a));

    getch();
}

int my_strlen(char *a)
{
    int i;
    int uzunluk = 0;

    printf("\n%c",*a); // debug etme fonksiyona a'nın bellek adresininn baslangıcındaki icerigi ne olarak geliyor diye kontrol ettik.
    fflush(stdin);
    fflush(stdout);
    perror("\ngecti.");

    while(a[i] != '\0') //String dizisinin her elemanini NULL mı diye okntrol ederek NULL'a kadar uzunlugunu bulmus olduk manuel olarak.
    {
        i++;
        uzunluk++;
    }
    return uzunluk;
}