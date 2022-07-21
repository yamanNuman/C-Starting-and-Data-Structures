/* 
Link List -> Veri + Bağ iki kısımdan oluşur. Bir kendi veri bilgisini tutar.Bağ kısmı ile de sonraki ve önceki verilerin bilgilerini işaret eder.
Herhangi bir tipten node(düğüm)'ların yine kendi tiplerinden düğümlere işaret etmesi(point) ile oluşan zincir. Buna göre her düğümde kendi tipinden bir pointer olacak
ve bu pointerlar ile düğümler birbirine aşağıdaki şekilde bağlanacaktır.

DATA+POİNTER -----> DATA+POİNTER ------> DATA+POİNTER (genelleştirilmiş link list gösterimi) DATA+POİNTER'ın oluşturudu yapı ---> NODE(düğüm)

*Her link list'in root denilen bir kök pointeri vardir.Link listin ilk elemanina root'dan erişiyoruz. Sonrakilerede o ilk elemandan erişim sağlaniyor.

struct n{
    int x; //veri
    n * next; // n tipinde next pointeri bir sonraki node göstermemizi sağlayan pointer.
}
n * root; // ilk elemani göstermek icin kullandigimiz pointer.
root->next dersek rootun gösterdigi node'un next'i olan node ulaşmak için kullaniriz. Root burada ilk elemani gösterir yani root->next ikinci elemani gösterir. root->next->next gibi
https://www.youtube.com/watch?v=r3uOBb3BM-0&list=PLh9ECzBB8tJN9bckI6FbWB03HkmogKrFT&index=1

One-Linked List -> Tek yönlü bir bağlantı vardır.Listenin başından sonuna doğru bir hareket gerçekleştirir.
Double Linked List -> İki yönlüdür. Bir düğüm hem bir sonraki hem de bir önceki düğümü işaret eder. Dolayısıyla listenin hem başına hem sonuna doğru hareket edebilir.

Circular Linked List(Çevrimsel bağlantılı liste) -> Circular Link List'de düğümlerden birinin adresini bilmek yeterlidir. Buradan tüm liste kayıtlarına erişim sağlanabilir.

-> Link listler dizi üzerinde kurulabilir ve ya malloc() gibi fonksiyonla dinamik bellek yapısı ile de kullanilabilir. Daha çok dinamik bellek yapisi tercih edilir. Bu durumda pointer
değişkenler kullanılır.

-> Liste üzerinde işlem yapılırken iterator(dolaşıcı) şeklinde bir pointer tanımlanır. Bu iterator veri aranması ekleme silme gibi işlemler sırasında listede ilgili elemana kadar
gidilmesini sağlar.

Eleman ekleme işlemi
1.Önce listenin durumuna bakılır.Eleman var mı yok mu ?
2.Eleman varsa yeni ekleme son ile gösterilen elemanın arkasına ilave edilir ve son pointerı yeni eklenen elemani gösterir.
3.Liste boş işe eklenen eleman ilk elemandır.İlk ve son pointeri bu elemani gösterir.

Başa Eleman Ekleme
1.Ekleme olmadan önce start elemanı ikinci eleman olacaktır.
2.Eklenecek eleman için node(düğüm) oluşturulur.
3.Yeni node'un next değeri start elemanina atanır.
4.Yeni node start elemani olarak güncellenir.
*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

typedef struct temp //Node(dugum) yapısı olusturuldu.
{
    int data; //veri kismi
    struct temp *next; //bir sonraki node gösterecek olan pointer. ilki veri kismi ikinci bu pointer kismini tanimladik

}Node;

void print(Node *root2);
void add(Node *root2);

int main()
{
    Node *root; //ilk elemani gösterecek olan pointer.
    Node *iter; //iteration dolasmak icin yeni bir pointer aldik. tek root ile next next next islemleri cok uzun hal alabilir o yüzden buna ihtiyac var.
    root = (Node*) malloc(sizeof(Node)); //rootun bellekte yerini ayirdik. Ayrilan bellek miktari tanimladigimiz Node yapısı kadar.
    root -> data = 31;

    // root -> data = 10; //rootun gösterdigi data kismina 10 degerini koyar.
    // root->next = (Node*) malloc(sizeof(Node)); //rootun gösterdigi node'un next pointeri yeni bir node gösteriyor.bellekte yeni bir node'luk alan ayriliyor.
    // root->next->data = 20; //buda olusturulan yeni node'un veri kismina 20 degerini atar. 
    // root->next->next = (Node*) malloc(sizeof(Node)); //rootun nextinin nexti yeni bir node olusturdu. root ilk node gösterdi sonra next 2. node gösterdi obur next 3.node gösterdi
    // root->next->next->data = 30;
    // root->next->next->next = NULL; //son kutuyu null atamaliyiz isletim sistemi ve ya C bunu null olarak almayabilir segmantaion fault hatası alabiliriz yoksa.
    // iter = root; //yani rootun gösterdigi yeri iteration da göstersin demek.

    // printf("%d\n",iter->data); //iteration suan rootu gosterdigi icin rootun gosterdigi node'daki datayi basar. Yani 10
    // //printf("%p\n",iter->next); //iteration suan rootun gosterdigi yerde.Suan bu sekilde ilk node daki next pointerinin adresini basar.
    // //printf("%d",iter->next->data); //iteration suan rootu gosteriyor.Bu sekilde rootun gösterdigi ilk node da ki next pointerinin gösterdigi diger node'daki datayi basar.

    // iter = iter -> next; //rootun gosterdigi node'un nexti olan yere konumlanmis oldu.
    // printf("%d\n",iter->data); //2.node da ki datayi basar cunku suan ordaki node'a konumlandi.

     iter = root; //iteratioru rootun oldugu yere aldik.

    for(int i = 0; i < 5; i++)
    {
        iter->next = (Node*) malloc(sizeof(Node)); // yeni node icin bellek tahsisi yap.
        iter = iter->next; //bir sonraki node 'u goster
        iter-> data = (i * 10); //iterin gosterdigi node'daki dataya i'nin 10 katini yaz.
        iter->next = NULL; // son gösterilen node null deger atamazsak segmantain fault hatasi aliriz.
    }
    print(root); //node'ları bastırmak icin fonksiyona gonder

    getch();
}

void print(Node *root2) // en bastan bastirmak icin fonksiyonda tanimladigimiz pointera rootu' gonderdik.
{

    while(root2 != NULL) //root2 null'a esit olmadigi surece dongu donsun
    {
        printf("%d ",root2->data); //gosterilen node daki data degerini bastirdik.
        root2 =  root2->next; // bir sonraki node gostermesi icin next yaptik.
    }
}