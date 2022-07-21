#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

int main(void)
{
    // char a[20];
    // printf("Ad-Soyad Bilgilerini Giriniz : ");
    // gets(a);
    // //printf("Ad-Soyad : %s",a);
    // printf("Ad-Soyad : ");
    // puts(a);
    // getch();

//     char a[] = "Yazimm";
//     char b[] = "Yazimmm";
//     int  c;

//    c = strcmp(a,b); // b<a ise 1 degerini dondurur. b>a ise -1 degerini dondurur. b=a ise 0 degerini dondurur.

//     printf("%d\n",c);
//    if(c < 0) printf("a stringi b stringinden kucuktur.");
//    else if(c > 0) printf("b stringi a stringinden kucuktur.");
//    else printf("a stringi b stringine esittir.");

    // char ilk[] = "Ankara";
    // char iki[] = "Ankalya";

    // int a;

    // a = strncmp(ilk,iki,3); //farklı ise -1 dondurur aynı ise 0 dondurur.

    // if(a < 0) printf("Birbirlerinden farkli.");
    // else if (a == 0) printf("Birbirlerine esit.");



    //SİFRE KARSILASTIRMA

    char a[] = "123gsnuman";
    char b[20];

    printf("Sifrenizi giriniz.(En fazla 20 karakter) : ");
    gets(b);
    
    int c =  strcmp(a,b); //sifreleri kıyaslamak icin. Girilen sifreyi mevcut sifre ile kıyaslıyor.

    if(c > 0) printf("Hatali sifre girdiniz.");
    else if(c < 0) printf("Hatali sifre girdiniz.");
    else printf("Sifre basarili bir sekilde eslestirildi.");

   getch();
   
}