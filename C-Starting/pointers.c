#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

// int main()
// {
//     int *p; //p pointeri tanımladık
//     int a = 10; //a'ya 10 degerini atadık.
//     p = &a; // p'ye a'nın bellek adresini atadık.
//     int *q; //q pointeri tanımladık
//     //q = &p; //q'ya p'nin bellek adresini atadık.

//     printf("Deger : %d",*p); //p pointeri *p yapılırsa a'nın bellek adresindeki içeriği yani değeri alır.Onu yazdirir.
//     printf("\nDeger : %d",p); //p'ye a'nın adresini atamıştık. yani p nin adresindeki içerik a'nın adresi. Bu yüzden a'nın adresini yazdırır.
//     printf("\nDeger : %d",&p); //p pointerının adresini yazdirir.
//     //printf("\nDeger : %d",**q); //ilk önce p'nin adresine gider ve oradaki içeriği alır.Daha sonra o içerikteki adrese gider ve oradaki değeri alır yazdırır.

//     getch();

// }

// int main()
// {
//     int *p;
//     int a = 10;
//     p = &a;

//     printf("%d",*p); //p pointeri a'nın adresindeki değeri verir.
//     *p = 20; //*p ile p pointerının tuttuğu adresteki değeri değiştirdik.
//     printf("\n%d",a); //bu yüzden a değeri 20 çıktısını verir. Çünkü p pointeri a'nın adresini gösteriyor a'nın adresindeki değer 10 iken pointera yeni değer tanıdığımız için 20 oldu.
//     int *q = (int *)malloc(sizeof(int)*a); // a degeri kadar int cinsinden yer ayırdık bellekte. 4*20 kadar
//     q[3] = 70;
//     printf("\n%d",q[3]);

//     getch();
// }

