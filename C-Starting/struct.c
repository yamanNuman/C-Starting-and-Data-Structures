#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

// typedef enum{ //enum unsigned int'dir. - değer alamadıkları icin.

//     bay, // 0
//     bayan // 1

// } cinsiyet;

// typedef enum{
//     pazartesi, //0
//     sali, //1
//     carsamba, //2
//     persembe, //3
//     cuma, //4
//     cumartesi, //5
//     pazar //6 dizi olarak alıyor.
// } gunler;

typedef struct{

    int yas;
    char *isim;
    // cinsiyet c; //enum{bay,bayan} cinsiyet; (dev c++ de tanımlı bu ancak gcc de tanımlı degil o yüzden ayrı bir struct olusturuğ insan struct icine tanımladık)
    // gunler tatilgunu;
    enum {bay,bayan} cinsiyet; // bu sekilde vscode da calisiyor bu tarzda yapilabilir.
    enum {pazartesi,sali,carsamba,persembe,cuma,cumartesi,pazar} tatilgunu;

}insan;

int main()
{   
    int a;
    insan Ali;
    Ali.yas = 30;
    // Ali.c = bayan;
    // Ali.tatilgunu = cumartesi;
    Ali.cinsiyet = bay;
    Ali.tatilgunu = persembe;
    
    printf("Alinin yasi : %d\n",Ali.yas);
    //printf("Alinin cinsiyeti : %u\n",Ali.c);
    //printf("Alinin tatil gunu : %u",Ali.tatilgunu);
    printf("Alinin cinsiyeti : %u",Ali.cinsiyet); //bu sekilde  vscode da calisiyor.
    printf("\nAlinin tatil gunu : %u",Ali.tatilgunu);



    getch();
}