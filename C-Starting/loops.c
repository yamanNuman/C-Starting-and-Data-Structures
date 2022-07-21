#include <stdio.h>
#include <stdlib.h>

int main()
{

    // for(int i = 21; i <= 50; i+=2)
    // {
    //     printf("%d",i);
    //     printf("\n");
    // }



    // int i = 0;
    // while(i <= 10)
    // {
    //     printf("%d\n",i);
    //     i++;
    // }


    // int i = 1;
    // do
    // {
    //     printf("%d\n",i);
    //     i++;
    // } while (i <= 10);



    // for(int i = 20; i < 50; i++)    20 ile 50 arasindaki tek sayilar
    // {
    //     if(i % 2 == 1)
    //     {
    //         printf("%d",i);
    //         printf("\n");
    //     }
    // }
    

    //100 den 20 e kadar 3 ve 7 e tam bölünen sayıları yazdır.
    // int i;
    // for(i = 100; i > 20; i--)
    // {
    //     if(i % 3 == 0 && i % 7 == 0)
    //     {
    //         printf("%d\n",i);
    //     }
    // }

    //Kullanıcıdan 3 adet sayı okuyup en büyüğünü yazdıran kod.
    // int i;
    // int sayi;
    // int enBuyuk = 0;
    // for(i = 0; i <= 2; i++)
    // {
    //     printf("%d - Sayiyi giriniz : ",i);
    //     scanf("%d",&sayi);
    //     if(sayi > enBuyuk)
    //     {
    //         enBuyuk = sayi;
    //     }
    // }
    // printf("\nEn buyuk sayi : %d\n",enBuyuk);


    //Kullanıcı -1 girene kadar girilen sayilar arasındaki en buyugu
    // int girilen;
    // int enBuyuk;
    // while(girilen != -1)
    // {
    //     printf("Bir sayi giriniz : ");
    //     scanf("%d",&girilen);
    //     if(girilen > enBuyuk)
    //     {
    //         enBuyuk = girilen;
    //     }
    // }
    // printf("En buyuk sayi : %d\n",enBuyuk);


    //Kullanıcı -1 girene kadar girilen sayilarin ortalamasının bulunması
    // int girilen = 0;
    // int ortalama;
    // int toplam = 0;
    // int count = 0;

    // while(girilen != -1)
    // {
    //     printf("Bir sayi giriniz : ");
    //     scanf("%d",&girilen);
    //     count++;
    //     toplam = toplam + girilen;
    // }
    // count = count - 1; 
    // toplam = toplam + 1;
    // ortalama = toplam / count;
    // printf("Kac sayi girildi : %d\n",count);
    // printf("Ortalama : %d\n",ortalama);


    //girilen sayinin asal olup olmadıgını bulan kod
    // int i = 2;
    // int num;
    // printf("Bir sayi giriniz : ");
    // scanf("%d",&num);
    // while(i < num)
    // {
    //     if(num % i == 0)
    //     {
    //         printf("Sayi asal degildir.\n",num);
    //         break;
    //     }
    //     i++;
    // }
    // if(i == num)
    // {
    //     printf("Sayi asaldir.\n");
    // }


    //ekrana dik * ile dik ucgen cizdirin.
    // int i,j;
    // for(i = 1; i <= 5; i++)
    // {
    //     for(j = 1; j <= i; j++)
    //     {
    //         printf("*");
    //     }
    //     printf("\n");
    // }

    //ekrana * ile ters dik ucgen cizdir.
    // int i,j;
    // for(i = 0; i <= 5; i++)
    // {
    //     for(j = 5; j > i; j--)
    //     {
    //         printf("*");
    //     }
    //     printf("\n");
    // }


    // int i,j;
    // for(i = 4; i >= 0; i--)
    // {
    //     for(j = 0; j <= 4-i; j++)
    //     {
    //         printf(" ");
    //     }
    //     for(j = 0; j <= i; j++)
    //     {
    //         printf("*");
    //     }
    //     printf("\n");
    // }


    
    system("pause");

    return 0;
}