/* Binary Search -> İkili Arama
    Veriler önceden belirli bir anahtar sözcüğe göre sirali olmalidir. Binary Search baglantili listelerde kullanilamaz.

1.Dizi ikiye ayrilir ve ortanca değere bakar.
2.Eğer aranan ortanca değerden küçükse soluna büyükse sağına doğru arama yapar.
3.Amaç arama uzayını yarıya düşürmek.
*/

#include <stdio.h>
#include <conio.h>

int binarySearch(int array[],int son,int x);

int main()
{
    int array[] = {1,3,5,7,9,11,13,15};
    int N = sizeof(array) / sizeof(array[0]); //eleman sayisini bulma
    int aranan = 15;

    int sonuc = binarySearch(array,N,aranan);
    if(sonuc == -1)
    {
        printf("Aranan dizide mevcut degil.");
    }
    else
    {
        printf("Aranan dizinin %d. elemani.",sonuc);
    }
    
    getch();
}

int binarySearch(int array[],int son,int x)
{
    int baslangic = 0;

    while(baslangic <= son)
    {
        int ortanca = (baslangic + son) / 2; //ortanca elemani bulmak icin.

        if(array[ortanca] == x) // eger ortanca eleman ise direk gonder.
        {
            return ortanca;
        }

        if(array[ortanca] < x) // aranan ortanca elemandan büyük ise sol tarafi görmezden gel.
        {
            baslangic = ortanca + 1;
        }
        else{ //eger aranan ortancadan kucukse sag tarafi gormezden gel.
            son = ortanca - 1;
        }
    }

    return -1;
}

