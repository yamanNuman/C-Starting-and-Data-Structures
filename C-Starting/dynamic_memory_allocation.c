#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

int main()
{

    //malloc() fonksiyonu ile bellek tahsisi yapmak.

    // int *ip;

    // ip = (int*) malloc(sizeof(int));
    // *ip = 126;

    // printf("Tahsis edilen bellek adres baslangici : %p\n",ip);
    // printf("Tahsis edilen bellekteki baslangic degeri : %d\n",*ip);


    //40 bytelik bir alan tahsis edip ona bir karakter dizisi yerleştirdik ve free() fonksiyonu ile en son tahsis edilen belleği boşalttık.
    // char *cp;
    
    // cp = (char*) malloc(40); //40 byte bellek tahsisi yapar. *cp pointerina  baslangic adresini atar.

    // if(!cp)
    // {
    //     printf("Bellek tahsisi hatasi !");
    //     exit(1);
    // }

    // strcpy(cp,"Bilgisayar"); //bir karakter dizisini baska bir karakter dizisine kopyalamak icin strcpy() fonksiyonu kullandık.string.h kütüphanesinde var.
    // printf("%s",cp);

    // free(cp); //tahsis ediln belleği boşaltmak için kullanılır.

    // char *cp1,*cp2,*cp3;
    // cp1 = "Birinci karakter dizisi.";
    // char cdizi[30];

    // cp2 = "Ikinci karakter dizisi.";
    
    // cp3 = (char*) malloc(50);
    // strcpy(cp3,"Ucungu karakter dizisi.");
    // strcpy(cdizi,"Dorduncu karakter dizisi.");

    // printf("%s\n%s\n%s\n%s\n",cp1,cp2,cp3,cdizi);



    //CALLOC() Kullanımı

    // int *ip,id;

    // ip = (int*) calloc(5,sizeof(int));

    // for(id = 0; id < 5; id++)
    // {
    //     *(ip+id) = (id+1) * 10;
    //     printf("%p adresindeki deger : %d\n",(ip+id),*(ip+id));
    // }


    //REALLOC() Kullanımı

    // int *ip,id;

    // ip = (int *) malloc(5 * sizeof(int));

    // for(id = 0; id < 5; id++)
    // {
    //     *(ip+id) = id+1;
    //     printf("%p adresindeki deger : %d\n",(ip+id),*(ip+id));
    // }

    // ip = (int *) realloc(ip,10 * sizeof(int));

    // printf("Genisletilmis bellek degerleri\n");

    // for( ;id < 10; id++)
    // {
    //     *(ip+id) = id+1;
    //     printf("%p adresindeki bellek degerleri : %d\n",(ip+id),*(ip+id));
    // }

    // free(ip);


    // char *pdizi[5];
    // int id;

    // for(id = 0; id < 5; id++) //bellek tahsili
    // {
    //     pdizi[id] = (char *) malloc(20 * sizeof(char)); //her elemana 20 bytelik alan ayırdı.
    // }

    // for(id = 0; id < 5; id++) //dizi atama
    // {
    //     strcpy(pdizi[id],"Karakter dizisi");
    // }

    // for(id = 0; id < 5; id++) //yazdirma islemi
    // {
    //     printf("%s\n",pdizi[id]);
    // }

    // for(id = 0; id < 5; id++) //bellek bosaltma
    // {
    //     free(pdizi[id]);
    // }
    
    getch();
}