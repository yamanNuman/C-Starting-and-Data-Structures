//Doğrusal arama bilinen en klasik arama methodudur.
//Aranan kelime baştan başlayıp sona kadar arama işlemi yapar. Bulduğu anda durur ve sonucu verir.

#include <stdio.h>
#include <conio.h>

int lineer_search(int array[],int n,int aranan);

int main()
{
    int array[] = {1,23,57,12,4,78,2,15,7,};
    int N = sizeof(array) / sizeof(array[0]); //dizinin eleman sayisini bulma
    int aranan = 78;

    printf("Arama sonucu : %d",lineer_search(array,N,aranan));

    getch();
}

int lineer_search(int array[],int n,int aranan)
{
    for(int i = 0; i < n; i++)
    {
        if(array[i] == aranan)
        {
            return i;            
        }
    }
    return -1;
}