/* Stack(Yığıt) yapısı verileri tutmayi sağlayan bir yapidir. LIFO prensibi ile çalışır. Yani Last In First Out (Son giren ilk çıkar)
    Tek taraflı giriş ve çıkışlara açıktır.
    Push-> Stack icerisinde bilgiyi koymaya (Stack'in en tepesine)
    Pop-> Stack icerisinden bilgi almaya (Stack'in en tepesinden)
    Top->Stackin en tepesindeki bilgiyi alir ancak cikartmaz sadece okur.
    Array veya link list üzerinde inşa edilebilir.
    Söyle düsünebilir bir çıkmaz sokak var ilk araba girdi sonra arkasına bir araba daha girdi sonra bir araba daha girdi.İlk arabanin cıkmasi icin son giren arabanin ilk cıkmasi
    gerekir. İlk giren çikarken son cikmis olur.
*/

#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

int *array; //diziyi pointer olarak global tanimladik.
int size = 2;
int top = 0;

void push(int a);
int pop();
void print();

int main()
{
    array = (int*) malloc(sizeof(int)*2); //2 elemanli dinamik bir dizi tanimladik.
    push(10); //stack ilk konulan eleman 
    push(20);
    push(30);
    push(40);
    push(50);
    print();

    printf("\nPopped %d ",pop()); //ilk yazdirilan stack son konulani gosterir.
    printf("\nPopped %d ",pop());
    printf("\nPopped %d ",pop());
    printf("\nPopped %d ",pop());
    
    //pop edilirken en tepedeki eleman alinir ilk.En son dizinin ilk elemani alinir.
    print(); 

    push(110);
    push(120);
    push(130);
    push(140);
    push(60);
    push(70);
    push(80);
    push(90);
    push(100);

    print();
    
    printf("\nPopped %d ",pop());
    printf("\nPopped %d ",pop());
    printf("\nPopped %d ",pop());

    print();

    getch();
}

void push(int a) //stack veri koymak icin
{
    if(top >= size) //2 elemandan fazla olma durumunda dizinin boyutunu arttirma islemi yaptik.
    {
        int *array2 = (int*) malloc(sizeof(int)*size*2); // boyutu 2 olan diziyi 2 ile carpip 2 katina cikarttik boyutu dinamik bir yapi var burada.Statik dizi degil.
        for(int i = 0; i < size; i++)
        {
            array2[i] = array[i]; //ilk dizinin elemanlarini 2.olusturulan boyutu daha büyük olan diziye tek tek kopyaladik.
        }
        free(array); //  arrayin elemanlarini array2 kopyaladiktan sonra array pointerinida array2 goster dedikten sonra bu array uzayda bos kaliyor garbage collector yaptik.Otomatik olmadigi icin.
        array = array2; //daha sonra ikinci diziyi birinci diziye kopyaladik.
        size *= 2; //boyutu 2 katina cikarttik.Baska eleman daha gelirse gene gitsin boyutu arttirsin diye.
    }

    array[top++] = a;
}

int pop() //stack'den bilgi almak icin en tepedeki bilgiyi alir.
{
    if(top <= size / 4) //pushta eleman eklerken dizi boyutunu arttirmistik pop da elemanlari alırken dizi bosuna fazla yer kaplamasin diye boyutunu azalttik.
    {
        int *array2 = (int*) malloc(sizeof(int)*size/2);
        for(int i = 0; i <= top; i++)
        {
            array2[i] = array[i];
        }
        free(array);
        array = array2;
        size /= 2;
    }
    return array[--top]; //pop ettikten sonra stack yapisini azalt demek.
}

void print()
{
    printf("\nArray Size : %d \n",size);
    for(int i = 0; i < top; i++)
    {
        printf("%d  ",array[i]);
    }
}