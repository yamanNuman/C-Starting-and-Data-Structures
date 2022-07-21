#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

typedef struct temp{ //Node olusturduk.
    int data;//veri kismi
    struct temp *next; //sonraki node gösterecek olan pointer kismi
    struct temp *prev; // yeni dugum yapisi | prev + data + next | doubly link list
}Node;

Node * siraliEkle(Node *root,int data);
void print(Node *root);
Node *elemanSilme(Node *root,int data);

int main(){

    Node *root = NULL; //root link list bos iken null deger gösterir.

    root = siraliEkle(root,400);
    root = siraliEkle(root,452);
    root = siraliEkle(root,50);
    root = siraliEkle(root,100);
    root = siraliEkle(root,65);
    root = siraliEkle(root,45);
    root = siraliEkle(root,430);
    
    printf("Silme islemi yapilmadan onceki Link List : ");
    print(root);
    root = elemanSilme(root,100);
    root = elemanSilme(root,45);
    root = elemanSilme(root,452);
    printf("\nSilme islemi yapildiktan sonraki Link List :");
    print(root);

    getch();
}

Node * siraliEkle(Node *root,int data){ //root degerini degistirip dondurmememsi icin Node * olarka tanımladık

    if(root == NULL) //link list bos ise 1 tane eleman olusturuyor.
    {
        root = (Node*) malloc(sizeof(Node));
        root->next = NULL; //son eleman null gösteriyor.
        root ->prev = NULL;
        root->data = data; //rootun gosterdigi node datasina datayi atiyor.
        return root; //root donduruyor.
    }

    if(root->data > data) // link list bos degil ancak ilk elemandan kucuk ise basa ekleme yapariz.
    {
        Node *temp = (Node*) malloc(sizeof(Node)); //gecici bir pointer atadik ve ona bellek tahsisi yaptik.
        temp-> data = data; // gecici node'un datasina veri atadik.
        temp-> next = root; // temp'in nextine rootu atadik yeni root oldu cunku basa gecti.
        root->prev = temp;
        return temp; //bu yüzden root yerine temp i dondurduk. cunku yeni root o oldu.
    }

    Node *iter = root; // rootun konumunu itere atadik.
    while(iter->next != NULL && iter->next->data < data) //iter null olmayana kadar ve iter'in nextinin datasi yeni datadan kucukse gitmeye devam et.
    {
        iter = iter->next;
    }

    Node *temp = (Node*) malloc(sizeof(Node)); // araya veya sona eleman ekleme durumu
    temp->next = iter->next;
    iter->next = temp;
    temp -> prev = iter;
    if(temp->next != NULL)
    {
        temp -> next -> prev = temp;
    }
    
    temp->data = data;
    return root;
}

void print(Node *root)
{
    while(root != NULL) //root null deger gostermeyene kadar dongu devam etsin.
    {
        printf("%d  ",root->data); //rootun gosterdigi datalari tek tek yaz.
        root = root->next; //bir sonraki node gostermesi icin nextini atadik.
    }
}

Node *elemanSilme(Node *root,int data)
{
    Node *temp;
    Node *iter = root;

    if(root -> data == data) //aradigim degeri root da olma ihtimalini kontrol et.
    {
        temp = root; //tempe rootu atadik.
        root = root -> next; //rootu rootun nexti yaptik.
        free(temp); //bellekten temizledik.
        return root;
    }

    while(iter -> next != NULL && iter -> next -> data != data) //link liste bastan sona kadar arayipta bulamama durumu
    {
        iter = iter -> next;
    }
    if(iter -> next == NULL) //eger bulamadi ise printf ile yazdir ve return root yap.
    {
        printf("Sayi bulunamadi...");
        return root;
    }
    temp = iter -> next; //temp silmek istedigimiz dugumu gosterecek.
    iter -> next = iter -> next -> next; //iterin nexti nextinin nextini gostericek ki arada dugum ile baglantisi olmasın.
    free(temp); //silmek istedigimiz node bellekten temizledik.
    if(iter-> next != NULL)
    {
        iter -> next -> prev = iter;
    }
    return root;
}