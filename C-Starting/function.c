#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

//FAKTORİYEL HESAPLAMA
// int fact(int num);

// int main()
// {
//     int num;
//     printf("Bir sayi giriniz : ");
//     scanf("%d",&num);

//     printf("Faktoriyel : %d\n",fact(num));

//     system("pause");

// }

// int fact(int num)
// {
//     int sayi = 1;
//     for(int i = 1; i <= num; i++)
//     {
//         sayi *= i;
//     }
//     return sayi;
// }



//KOMBİNASYON HESAPLAMA
// int fact(int x);

// int main()
// {
//     int num1,num2;
//     printf("Birinci sayiyi giriniz : ");
//     scanf("%d",&num1);
//     printf("Ikinci sayiyi giriniz : ");
//     scanf("%d",&num2);
//     printf("Kombinasyon : %d\n",fact(num1)/(fact(num1-num2)*fact(num2)));

//     system("pause");
// }

// int fact(int x)
// {
//     int sayi = 1;
//     for(int i = 1; i <= x; i++)
//     {
//         sayi *= i;
//     }
//     return sayi;
// }



//FİBONACHİ SAYILARI
// int fib(int n);

// int main()
// {
//     int num;
//     printf("Bir sayiyi giriniz : ");
//     scanf("%d",&num);
//     printf("Fibonacci : %d\n",fib(num));
//     system("pause");
// }

// int fib(int n)
// {
//     int a = 1;
//     int b = 1;
//     int c;

//     for(int i = 3; i <= n; i++)
//     {
//         c = a + b;
//         a = b;
//         b = c;
//     }
//     return c;
// }


//NXN KARE SAYISI BULMA
// int kare_sayi(int x);

// int main()
// {
//     int num;
//     printf("Bir sayi giriniz NxN'lik kare sayisi bulmak icin : ");
//     scanf("%d",&num);
//     printf("Kare sayisi : %d\n",kare_sayi(num));

//     system("pause");
// }

// int kare_sayi(int x)
// {
//      if(x == 1)
//      {
//          return 1;
//      }
//      return kare_sayi(x-1)*4+1;
// }



//REFERANS YOLU İLE ARGUMAN GONDERME 
// int main()
// {
//     int id = 21;
//     fonk(&id); // burada ilk olarak id degiskeinin bellek adresini fonskiyona gönderildi.

//     printf("Main Fonksiyonun Deger : %d\n",id); // normalde bellek adresi gonderilmese main fonk icinde tnaımlanan deger yazdırılır ama fonk bellek adresi gonderildigi icin o adresteki deger degisti ve onu yazdirdi.

//     getch();
// }

// int fonk(int *id)
// {
//     *id = *id + 35;

//     printf("Fonk fonksiyonu icindeki deger : %d\n",*id); // Fonksiyona gelen bellek adresindeki deger 21 -> 21 + 35 den 56 oldu ve yazdirdi. ilk fonksiyondaki deger yaziliyor.
// }




