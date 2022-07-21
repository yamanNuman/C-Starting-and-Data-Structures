// Insertion Sort - > Araya Sokma Sıralaması / Veri Modeli-> Link List,Array Saklama Yeri ->internal(harici)(RAM)

/* İlk elemani yerinde birakır. Daha sonraki elemanlari sırayla alarak sıraya uygun yere sokar.
İlk eleman yerinde kalir. İkinci eleman alinir dizi 2 elemanli gibi kendi içinde siralanir.
3.Eleman alındıgında dizi 3 elamanlı gibi sıralanır. Sıralama süreci boyunca dizi 2 elemanli gibi dusunulur.
Eleman ekleme zaman karmaşıklığı O(n)
Diziyi tamamen sıralamak için zaman karmaşıklığı O(n^2)

Örnek -> Sıralanacak Dizi [7,3,5,8,2,9]
         Başlangıç Durumu [7][3,5,8,2,9]
         1.Adım -> [7,3][5,8,2,9] --> [3,7][5,8,2,9]
         2.Adım -> [3,7,5][8,2,9] --> [3,5,7][8,2,9]
         3.Adım -> [3,5,7,8][2,9] --> [3,5,7,9][2,9]
         4.Adım -> [3,5,7,8,2][9] --> [2,3,5,7,8][9]
         5.Adım -> [3,5,7,8,2,9] --> [2,3,5,7,8,9]

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

void insertion_sort(int arr[],int n);
void printArray(int arr[],int n);

int main()
{
    int array[] = {5,2,1,12,15,17,6};
    int N;
    N = sizeof(array) / sizeof(array[0]); //dizinin eleman sayisini bulmak icin dizinin toplam bellek boyutunu 1 elemanin bellek boyutuna böldük.
    
    printf("Siralanmamis Hali\n");
    for(int i = 0; i < N; i++) //siralanmamis halini ekrana bastirmak icin.
    {
        printf("%d  ",array[i]);
    }
    printf("\n");

    insertion_sort(array,N); //siralama fonksiyonuna elemanlari gönderdik.
    printArray(array,N); //ekrana yazdirmak icin fonksiyona elemanlari gonderdik.


    getch();
}

void insertion_sort(int arr[],int n) //siralama fonksiyonu
{
    int i,j,key;

    for(i = 1; i < n; i++) // i = 1 cünkü ilk elemani tuttuk.İlk elemandan sonraki ilk elemani aldik ilk önce.
    {
        key = arr[i]; // key indisi 1 olarak belirleniyor. İlk elemandan sonraki ilk eleman
        j = i - 1; // j dizinin ilk indisi veriliyor.
        while(j >= 0 && arr[j] > key) //eger 0 dan buyuk ve ya eşit ve de keyden buyukse //amac bir onceki indis ile karsılastırma.
        {
            arr[j + 1] = arr[j]; //j nin 1 fazlasına j'yi atıyor. Yani key indisindeki eleman arrayin ilk elemanindan kucukse basa alınıyor. Kaydirma islemi yapıyor swap degil.
            j--;
        }
        arr[j + 1] = key; // insertion sort algoritmasında swap islemi olmaz elemanlar kaydırılarak islem yapılır.
    }
}
void printArray(int arr[],int n)
{
    int i;
    printf("Siralanmis Hali\n");
    for(i = 0; i < n; i++)
    {
        printf("%d  ",arr[i]);
    }
}