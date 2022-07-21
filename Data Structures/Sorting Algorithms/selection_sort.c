// Selection Sort -> Seçmeli Siralama  Veri Modeli-> Link List,Array Saklama Yeri-> İnternal and External

/* Dizinin ilk elemani alinir Daha sonra dizi icerisindeki ilk elemandan haric en kucuk veya en buyuk eleman bulunur ve ilk eleman ile yer degistirir.(Siralama metoduna göre degisir
büyükten kücüge mi kücükten büyüge mi) Daha sonra dizinin ikinci elemani ele alinir. Kalan elemanlar arasinda duruma bakılır. Yer degistiririlir. Bu islem dizinin son elemanina kadar
yapilir.

Sıralanacak Dizi -> [7,3,5,8,2,9]
Başlangıç Durumu -> [7,3,5,8,2,9]

    1.Adım -> [][7,3,5,8,2,9] --> [2][3,5,8,7,9] (ilk eleman 7 ele alindi daha sonra dizide en kucuk elemana bakildi 2 onla yer degisti)
    2.Adım -> [2][3,5,8,7,9] --> [2,3][5,8,7,9] 3 ele alindi sonra dizinin kalan elemanlarina bakıldı en kucuk 3 oldugu icin degisim olmadi.
    3.Adım ->[2,3][5,8,7,9] --> [2,3,5][8,7,9] 5 ele alindi kalanina bakildi daha kucuk olmadıgı icin degisim olmadi.
    4.Adım ->[2,3,5][8,7,9] --> [2,3,5,7][8,9] 8 ele alindi kalana bakildi 7 daha kucuk oldugu icin yer degistirdiler.
    5.Adım ->[2,3,5,7][8,9] --> [2,3,5,7,8][9] 8 ele alindi kalana bakildi daha kucugu yok ayni kaldi.
    6.Adım ->[2,3,5,7,8][9] --> [2,3,5,7,8,9]  son eleman dizi bitti siralanmis oldu.

*/

#include <stdio.h>
#include <conio.h>

void selection_sort(int arr[],int n);

int main()
{
    int array[] = {1,5,7,82,14,6};

    int N;
    N = sizeof(array) / sizeof(array[0]); // eleman sayisini bulduk.

    printf("Siralanmamis Hali\n");
    for(int i = 0; i < N; i++)
    {
        printf("%d  ",array[i]);
    }

    selection_sort(array,N);
    
    printf("\nSiralanmis Hali\n");
    for(int i = 0; i < N; i++)
    {
        printf("%d  ",array[i]);
    }

    getch();
}

void selection_sort(int arr[],int n)
{
    int i,j,index,enKucuk;

    for(i = 0; i < n-1; i++) //dizinin basindan basliyor. En son eleman siralanmis oldugu icin n-1 olarak aliyor.
    {
        enKucuk = arr[n-1]; //en kucuk eleman dizinin son elemani olarak ataniyor.
        index = n - 1; //index son elemanda
    
        for(j = i; j < n-1; j++)
        {
            if(arr[j] < enKucuk) // eger arr[j] enkuuck elemandan kucukse
            {
                enKucuk = arr[j]; //yeni en kucuk eleman arr[j] yap
                index = j; // onuda indexe at.
            }
        }
            arr[index] = arr[i]; //arr[index]'e arr[i] yani ilk eleman yap.
            arr[i] = enKucuk; // array[i] artik enkucuk oldu burada swap islemi olmus oldu.
    }
}