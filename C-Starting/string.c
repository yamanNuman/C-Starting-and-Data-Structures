#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

int main(void)
{
    // char isim[20];
    // char *soyisim;
    // soyisim = (char*) malloc(sizeof(char) * 20); //dinamik bellek kullanarak pointera atadik öyle yapıyoruz.
    // scanf("%s",isim); //bosluktan sonrasını yazmaz. 20 karakterden fazlasını yazadabilir yazmayadabilir. Cunku segmantaion fault yhatası verebilir.Bellek kaynaklı.
    // scanf("%s",soyisim);
    // printf("Tanistigimiza memnun oldum %s %s",isim,soyisim);
    // printf("\nUcuncu karakterler : %c  %c",isim[3],soyisim[3]);

    // char ilks[20] = "Deneme Mesaji";
    // char ikincis[20] = "ikinci mesaj";
    // char *ilk = ilks; // &ilks de olabilir ancak dizi oldugu icin ampersanta gerek olmadan dizinin ilk karaterinin adresini tanımlar. ilks[0] = &ilks = ilks;
    // char *ikinci = ikincis; // pointerlara baslangıc adrslerini verdik.
    // printf("%s  %s",ilk,ikinci); // ilk once normal hallerini yazdirdik.
    // ilk = ikinci; // ilk'e ikinciyi atadik. //shallow copy yapmıs oldu.
    // printf("\n%s  %s",ilk,ikinci); // ikiside ikinci mesaj olarak yazılır.
    // ilk[3] = 'x'; //3.elemanı değiştirme işlemi yaptık.
    // printf("\n%s  %s",ilk,ikinci); // ilki ikinciye esitledigimiz icin ikisinide ikixci oılarak yazar. Cunku ram de burada tek kopya tutuluyor. Bu yüzden ikiside değişmiş oldu.


    char ilks[20] = "Deneme Mesaji";
    char ikincis[20] = "ikinci mesaj";
    char *ilk = ilks; // &ilks de olabilir ancak dizi oldugu icin ampersanta gerek olmadan dizinin ilk karaterinin adresini tanımlar. ilks[0] = &ilks = ilks;
    char *ikinci = ikincis; // pointerlara baslangıc adrslerini verdik.
    printf("%s  %s",ilk,ikinci); // ilk once normal hallerini yazdirdik.
    strcpy(ilk,ikinci); // hic ugrasmadan bu ssekilde de yaparsak ikinci degismeden kalır. deep copy yapmıs olur.
    /*char c = ikinci[0];
    int i = 0;
    while(c != '\0') //boyle yaparak ram 2 ayrı kopya olusturmus olduk ve bu sayede iki mesajda degismedi ikinci aynı kaldı. Digerinde ilk degisince oda degismisti tek kopyadan oturu
    {
        ilk[i] = ikinci[i];
        i++;
        c = ikinci[i];
    }
    */
    printf("\n%s  %s",ilk,ikinci); // ikiside ikinci mesaj olarak yazılır.
    ilk[3] = 'x'; //3.elemanı değiştirme işlemi yaptık.
    printf("\n%s  %s",ilk,ikinci); 
    printf("\n Dizi uzunlugu : %u ",strlen(ilk));
    printf("\n Dizi uzunlugu : %u ",strlen(ikinci));
    getch();
}