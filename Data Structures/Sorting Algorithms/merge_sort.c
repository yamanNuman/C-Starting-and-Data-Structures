// Merge Sort -> Birleştirmeli Sıralama  Veri Modeli->Link List,List,Array  Saklama Yeri-->İnternal and External  DİVİDE AND CONQUER uygulanır.

/*
    En küçük hale gelene kadar ikili gruplara böler ve karşılaştırma yöntemi uygular.
    Sıralı olmayan listeyi ortadan ikiye eşit olarak ayirir.
    Alt listeleri kendi içinde siralar.
    Sıralı iki alt listeyi tek bir sirali liste olacak şekilde birleştirir.
*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define max 8

int array[max];

int merge_sort(int low, int high);
int merge(int low,int mid,int high);

int main()
{
    int i,j;

    printf("Elemanlari giriniz : ");
    for(i = 0; i <= 7; i++)
    {
        scanf("%d",&array[i]);
        printf("%d  ",array[i]);
    }

    merge_sort(0,7);

    printf("\nSiralanmis Hali\n");
        for(i = 0; i <= 7; i++)
    {
        printf("%d  ",array[i]);
    }
    getch();
}

int merge_sort(int low, int high) //parçalama kısmı 
{
    if(low < high)
    {
        int mid = (low + high) / 2;

        merge_sort(low,mid);
        merge_sort(mid+1,high);
        merge(low,mid,high);
    }
}

int merge(int low,int mid,int high) //siralama ve birlestirme kismi
{
    int temp[max];
    int i = low;
    int k = low;
    int j = mid + 1;

    while((i <= mid) && (j <= high))
    {
        if(array[i] <= array[j])
            temp[k++] = array[i++];
        else
            temp[k++] = array[j++];
    }

    while(i <= mid)
        temp[k++] = array[i++];

    while(j <= high)
        temp[k++] = array[j++];

    for(i = low; i <= high; i++)
    {
        array[i] = temp[i];
    }
}