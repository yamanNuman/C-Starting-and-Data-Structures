#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

//TEK BOYUTLU ARRAY
// int main()
// {
//     int array[11];

//     for(int i = 10; i <= 20; i++)
//     {
//         array[i] = i; // bunu yapmazsak rastgele deger atar.
//         printf("Array-%d : %d",i,array[i]);
//         printf("\n");
//     }
    
//     getch();
// }


//2 BOYUTLU ARRAY
// int main()
// {
//     int matrix[3][3];

//     for(int i = 0; i < 3; i++)
//     {
//         for(int j = 0; j < 3; j++)
//         {
//             printf("%d - %d Elemani giriniz : ",i,j);
//             scanf("%d",&matrix[i][j]);
//         }
//     }
//     printf("\n");
//     for(int i = 0; i < 3; i++)
//     {
//         for(int j = 0; j < 3; j++)
//         {
//             printf("%d  ",matrix[i][j]);
//         }
//         printf("\n");
//     }
//     getch();
// }


//ARRAYI TERSTEN YAZDIRMA
// int main()
// {
//     int array[] = {0,1,2,3,4};

//     for(int i = 0; i < 5; i++)
//     {
//         printf("%d  ",array[i]);
//     }
//     printf("\n");
//     int gecici;

//     for(int i = 0; i < 2; i++)
//     {
//         gecici = array[i];
//         array[i] = array[4-i];
//         array[4-i] =  gecici;
//     }
//     printf("\n");
//     for(int i = 0; i < 5; i++)
//     {
//         printf("%d  ",array[i]);
//     }
//     getch();
// }



//FİBONACCHİ SERİSİ
// int main()
// {
//     int array[20];
//     array[0] = 1;
//     array[1] = 1;

//     for(int i = 2; i < 20; i++)
//     {
//         array[i] = array[i-1]+array[i-2];
//         printf("%d  ",array[i]);
//     }
//     getch();
// }


//NOT HESAPLAMA ORTALAMA EN KUCUK EN BUYUK
// int main()
// {
//     int student[10];
//     float ortalama;
//     int toplam = 0;
//     int enBuyuk = 0;
//     int enKucuk = 100;
//     for(int i = 1; i <= 10; i++)
//     {
//         student[i] = i;
//         printf("Student - %d : ",i,student[i]);
//         scanf("%d",&student[i]);
//         toplam += student[i];

//           if(student[i] > enBuyuk)
//         {
//             enBuyuk = student[i];
//         }
//                 if(student[i] < enKucuk)
//         {
//             enKucuk = student[i];
//         }
//     }

//     printf("\n\n");

//     for(int i = 1; i <= 10; i++)
//     {
//         printf("Student - %d : %d",i,student[i]);
//         printf("\n");
//     }
//     ortalama = toplam / 10;
//     printf("\n\nOrtalama : %.3f",ortalama);
//     printf("\nEn Kucuk : %d",enKucuk);
//     printf("\nEn Buyuk : %d",enBuyuk);
//     getch();
// }