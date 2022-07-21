#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

// int f(int *a);
// int g(int a);

// int main()
// {
//     int *p; //p pointeri tnaımladık
//     int a = 10; // a'ya 10 degerini atadık
//     p = &a; // p pointeri a'nın bellek adresini gösteriyor.

//     printf("%d",*p); //*p ile a'nın adresindeki degeri gösterdik.
//     *p = 20; //*p a'nın adresindeki gösterdiği değeri 20 yaptı.

//     printf("\n%d",a); //a degeri 20 cıktısı verir.

//     f(&a); //f fonksiyonuna a'nın adresini gönderdik.Cunku fonksiyonda pointer tanımlı.
//     printf("\n%d",a); //a'nın degeri 80 olur. Cünkü adresteki değeri reference ile değiştirdik.
//     g(a);
//     printf("\n%d",a); //a'nın değeri hala 80 kalır. Call by value ile gosterdiğimiz için degisiklik yapamadi orada.

//     getch();
// }

// int f(int *a) //call by reference
// {
//     *a = 80;
// }

// int g(int a) //call by value
// {
//     a = 90;

// }

// int main()
// {
//     char *cp,cd;
//     cp = &cd;

//     for(cd = 'A'; cd < 'L'; cd++)
//     {
//         printf("Deger : %c | CP Adress : %d  | CD Adress : %d  | Sadece CP : %d  | Sadece CD : %c" ,*cp,&cp,&cd,cp,cd);
//         printf("\n");
//     }

//     getch();
// }

// int main()
// {
//     int *ip,id;
//     ip = &id;

//     id = 21;

//     printf("%d",*ip+1); //*ip id'nin bellek adresindeki içeriği gösterir. 21  +1 yapınca 22 yazdirir.
//     printf("\n%d",ip); //id nin bellek adresini gösterir.
//     printf("\n%d",&id); //id nin bellek adresini gösterir.
//     printf("\n%d",&ip); //ip'nin bellek adresini verir.
//     printf("\n%d",&ip+1); // bellek adresnin +1 fazlasını verir burada görüldügü üzere 8 bitlik alan ayırmıs. pointera 8 bit ayırmıs.
//     printf("\n%d",ip+1); //id bellek adresinin 1 fazlasını verir burada 4 bit almıs. int deger 4 bit ayırmıs.

//     getch();
// }

// int main()
// {
//     int cdizi[] = {'A','B','C','D','E','F'};
//     char *cp;
//     cp = cdizi; //cp = &cdizi[0]; aynı şey dizinin ilk elemanın bellek adresini pointera atar.
//     int len,id;

//     len = sizeof(cdizi) / sizeof(char); // dizinin eleman sayısını bulur. Dizinin boyutunu 1 eleman olan char boyutuna böler ve dizi eleman sayısını bulur.

//     for(id = 0; id < len; id++)
//     {
//         printf("%c ",*cp++);
//     }

//     getch();
// }

// int main()
// {
//     int *ip;
//     int idizi[] = {1,2,3,4,5};
//     int id;

//     printf("Pointer bellek adresi : %p\n",&ip);

//     ip = idizi; // ip pointerına diznin ilk elemanın adresini atar. ip = &idizi[0] ile aynı sey.

//     for(id = 0; id < 5; id++,ip++) // eger burada ip++ yapmasaydık pointer adresi ve gösterdigi deger sürekli dizinin ilk elemaninin verirdi.
//     //ip++ --> ip = ip + (1*sizeof(int)) demektir.
//     {
//         printf("Pointerin icerdigi bellek adresi : %p ve %p\n",ip,&idizi[id]); // pointerin icerdigi bellek adresi idizi[id] nin adresini verir. Her elemanda degisir.
//         printf("Pointerin gosterdigi bellek adresinin icerigi : %d ve %d\n",*ip,idizi[id]); // pointer idizi[id] adresindeki icerigi gösterir degisir.
//     }

//     getch();
// }

// int main()
// {
//     int *ip;
//     int idizi[5] = {15,72,154,298,345};
//     printf("Pointer bellek adresi : %p\n\n",&ip);

//     ip = &idizi[4]; //dizinin 5.elemanin adresini ip pointerina atadık.

//     printf("Pointerin icerdigi bellek adresi : %p\n",ip); // üstteki pointerin kendi bellek adresi bu ise pointerin gosterdigi bellek adresi.
//     printf("Pointerin gosterdigi adresteki deger : %d\n",*ip);

//     ip = ip-2; // ya da ip -=2 de yapılabilir. // 2 eleman oncekini gosterir. 2 elemanlık bit geri gider bellek adresinde.
   
//     printf("Pointerin icerdigi bellek adresi : %p\n",ip);
//     printf("Pointerin gosterdigi adresteki deger : %d\n",*ip);
 

//     getch();
// }