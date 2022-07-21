// Bubble Sort -> Kabarcık Sıralamsaı  Veri Modeli - > Link List,Array Saklama Yeri->İnternal(RAM)

/* İlk eleman ile ikinci eleman karsılastırılır. İlk eleman ikinci elemandan kucuk ise swap islemi yapilir. Daha Sonra 2. eleman ile 3. eleman kıyaslanır duruma göre swap islemi
yapilir. Daha sonra 3.eleman ile 4.eleman kıyaslanır. Swap islemi yapilir. Dizinin sonuna kadar bu islem devam eder. Bitince tekrar ilk eleman ile ikinci eleman bakılır gerkeiyorsa
swap yapılır. Boyle boyle diziyi tekrar tekrar dolanarak sıralama islemi bitene kadar dolanır.

Sıralanacak Dizi -> [3,2,6,8,5]
Başlangıç Dizi -> [3,2][6,8,5] --> [2,3][6,8,5]
                  [2][3,6][8,5] --> [2,3,6][8,5]
                  [2,3][6,8][5] --> [2,3,6,8][5]
                  [2,3,6][8,5] --> [2,3,6,5,8] //sonra diziyi bastan tekrar tarar.

                  [2,3][6,8,5] --> [2,3,6,8,5]
                  [2][3,6][8,5] --> [2,3,6],[8,5]
                  [2,3][6,8][5] --> [2,3,6,8][5]
                  [2,3,6][8,5] --> [2,3,6,5,8] //diziyi bstan tekrar tarar.

                  [2,3][6,5,8] --> [2,3][6,5,8]
                  [2][3,6][5,8] --> [2,3,6][5,8]
                  [2,3][6,5][8] --> [2,3,5,6][8]
                  [2,3,5][6,8] --> [2,3,5,6,8] // dizi tekrardan taranir ancak siralanmis oldugu icin hicbir swap olmaz ve sonlanir.

*/

#include <stdio.h>
#include <conio.h>

void bubble_sort(int arr[],int n);

int main()
{
    int array[] = {12,31,1,25,61,121,4};
    int N =  sizeof(array) / sizeof(array[0]);

    printf("Siralanmamis Hali\n");
    for(int i = 0; i < N; i++)
    {
        printf("%d  ",array[i]);
    }

    bubble_sort(array,N);

    printf("\nSiralanmamis Hali\n");
    for(int i = 0; i < N; i++)
    {
        printf("%d  ",array[i]);
    }
    getch();
}

void bubble_sort(int arr[],int n)
{
    int i,j,gecici;

    for(i = 0; i < n-1; i++)
    {
        for(j = 0; j < n-1-i; j++)
        {
            if(arr[j] > arr[j+1]) // ilk eleman ikinci elemandan buyukse kosulu sagla
            {
                gecici = arr[j]; //burada swap islemi yapiliyor.
                arr[j] = arr[j+1];
                arr[j+1] = gecici;
            }
        }
    }
}

