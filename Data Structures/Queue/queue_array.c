/* 
Queue (Sıra ve ya kuyruk yapısı) -> FIFO (First in First Out) İlk giren ilk çikar mantigi. Mesela gişede bilet almaya siraya girildi ilk siraya giren alir ve ilk çıkar
Enque(veri) -> Verilen veriyi siraya koyar.Veri eklerken kullanilir.
Deque() -> Sıradan bir veri çikarir siranin boyutunu azaltir ve cikarilan veriyi cagrildigi yere geri dondurur.
*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int *array = NULL; //dizi olusturmak icin kullandigmiz pointer cunku dinamik yapida olacak.
int queue = 0; //kuyruk
int queueHead = 0; //kuyrugun basi
int size = 2; //dizi boyutu 2 den baslaticaz

int deque();
void enque(int data);
void deleteSpace();
void printQueue();

int main()
{

    for(int i = 0; i < 20; i++)
    {
        enque(i*10);
    }
    printQueue();

    printf("\nSize : %d Queue : %d QueueHead : %d \n",size,queue,queueHead);
    for(int i = 0; i < 10; i++)
    {
        printf("Deque : %d\n",deque());
    }
    printf("\nSize : %d Queue : %d QueueHead : %d \n",size,queue,queueHead);

    deleteSpace();
    printf("\n");
    printQueue();
    printf("\nSize : %d Queue : %d QueueHead : %d \n",size,queue,queueHead);
    for(int i = 0; i < 20; i++)
    {
        enque(i*10);
    }
    printf("Size : %d Queue : %d QueueHead : %d \n",size,queue,queueHead);
        for(int i = 0; i < 20; i++)
    {
        printf("Deque : %d\n",deque());
    }
    printf("Size : %d Queue : %d QueueHead : %d \n",size,queue,queueHead);
    deleteSpace();
    printf("Size : %d Queue : %d QueueHead : %d \n",size,queue,queueHead);

    getch();
}

int deque()
{
    if(queue == queueHead) //kuyruk ve kuyrukbasi birbiriyle ayni yeri gosteriyorsa yani kuyruk bos olma durumu kontrol etme.
    {
        printf("Queue is empty.");
        return -1;
    }
    if(queue - queueHead <= size / 4) //diziyi kücültme
    {
        int *array2 = (int*) malloc(sizeof(int)*size/2);
        for(int i = 0; i < queue - queueHead; i++)
        {
            array2[i] = array[queueHead+i];
        }
        queue -= queueHead;
        free(array);
        size /= 2;
        array = array2;
    }
    return array[queueHead++];
}

void enque(int data)
{
    if(array == NULL) //dizi bossa 
    {
        array = (int*) malloc(sizeof(int)*2); //2 boyutlu bir bellek yeri ayiralim dizi icin.
    }
    if(queue >= size) //eleman sayisi boyuttan buyuk ve ya esit ise dizimizin boyutunu arttirmamiz gerekiyor.
    {
        size *= 2; //boyutu iki katina cikar
        int *array2 = (int*) malloc(sizeof(int)*size); //yeni dizinin boyutunu eski dizinin boyutunun iki katı olarak memory allocated yaptik.
        
        for(int i = 0; i < size/2 ;i++)
        {
            array2[i] = array[i]; //eski dizideki elemanlari yeni diziye kopyaladik.
        }
        free(array); //diziyi kopyaladigimiz icin bos kaldi garbage collector yaptik.
        array = array2; //en bastaki arrayimizin yerine array2 koyduk. artik eski dizi gitti global olarka tanimliydi array onun yerine array2 kullansin eskisi gitti cunku.
    }
    array[queue++] = data; //ilk once array[queue] 0. indise datayı koy sonrada indisi 1 arttir dedik.Cunku gelen eleman sonraki indise gelmeli ilk giren ilk sirada kalmali
}

void deleteSpace() //kuyrukta eleman silince baştan sldigi icin bosluk kalicak diziden o bosluklari kaldirmamiz gerek.
{
    if(queueHead == 0)
    {
        return; //kuyruk basi basta ise hicbirsey dondurme dedik. Void tanimli fonksiyonlarda direk return; olarak kullanabiliriz.  
    }
    for(int i = 0; i < size; i++)
    {
        array[i] = array[i+queueHead]; //kuyrugun basini ilk elemana getir. Kuyrugun basi dizide kalan elemanlar arasinda ilk elemani gostericek onu en basa alirsak bosluk sorunu gider.
    }
    queue -= queueHead; //kuyrugun basini kaydirdigimiz kadar kuyruguda kaydirmamiz lazim ki yeni eklenecek eleman bir sonraki indise eklenebilsin. Kaydirmassak ileri eklenir.
    queueHead = 0; //ilk indise yerlessin.
}

void printQueue()
{
    printf("Queue : ");
    for(int i = 0; i < queue; i++)
    {
        printf("%d  ",array[i]);
    }
}