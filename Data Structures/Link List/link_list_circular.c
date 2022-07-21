#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

typedef struct temp{ //Node olusturduk.
    int data;//veri kismi
    struct temp *next; //sonraki node gösterecek olan pointer kismi
}Node;

Node * siraliEkle(Node *root,int data);
void print(Node *root);
void arayaEkle(Node *root);
void sonaEkle(Node *root,int data);
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
    arayaEkle(root);
    sonaEkle(root,31);
    root = elemanSilme(root,999);
    root = elemanSilme(root,100);

    print(root);

    getch();
}

Node * siraliEkle(Node *root,int data){ //root degerini degistirip dondurmememsi icin Node * olarka tanımladık

    if(root == NULL) //link list bos ise 1 tane eleman olusturuyor.
    {
        root = (Node*) malloc(sizeof(Node));
        root->next = root; //son eleman null gösteriyor.
        root->data = data; //rootun gosterdigi node datasina datayi atiyor.
        return root; //root donduruyor. 
    }

    if(root->data > data) // link list bos degil ancak ilk elemandan kucuk ise basa ekleme yapariz.
    {
        Node *temp = (Node*) malloc(sizeof(Node)); //gecici bir pointer atadik ve ona bellek tahsisi yaptik.
        temp-> data = data; // gecici node'un datasina veri atadik.
        temp-> next = root; // temp'in nextine rootu atadik yeni root oldu cunku basa gecti.
        Node *iter = root;
        while(iter -> next != root)
        {
            iter = iter -> next;
        }
        iter -> next = temp;
        return temp; //bu yüzden root yerine temp i dondurduk. cunku yeni root o oldu.
    }

    Node *iter = root; // rootun konumunu itere atadik.
    while(iter->next != root && iter->next->data < data) //iter null olmayana kadar ve iter'in nextinin datasi yeni datadan kucukse gitmeye devam et.
    {
        iter = iter->next;
    }

    Node *temp = (Node*) malloc(sizeof(Node)); // araya veya sona eleman ekleme durumu
    temp->next = iter->next;
    iter->next = temp;
    temp->data = data;
    return root;
}

void print(Node *root)
{
    Node *iter = root;
    printf("%d  ",iter->data);
    iter = iter->next;

    while(iter != root ) //root null deger gostermeyene kadar dongu devam etsin.
    {
        printf("%d  ",iter->data); //rootun gosterdigi datalari tek tek yaz.
        iter = iter->next; //bir sonraki node gostermesi icin nextini atadik.
    }
    printf("\n");
}

void sonaEkle(Node *root,int data)
{
    Node *iter = root;
    while(iter -> next != root){
        iter = iter -> next;
    }
    iter -> next = (Node*) malloc(sizeof(Node));
    iter -> next -> data  = data;
    iter -> next -> next = root;
}

void arayaEkle(Node *root)
{
    Node *iter = root; //iteration rootun oldugu yere konumladik.

    for(int i = 0; i < 5; i++) //iter 3 kere hareket etmis oldu. 500 0 10 20 (suan 20 gosteriyor.)
    {
        iter = iter->next;
    }
    Node *temp = (Node*) malloc(sizeof(Node)); //araya node koymak icin bir pointer daha olusturuldu.
    temp->next = iter->next; //iterin nexti 30 u gosterir. tempi de oraya gösterdik.
    iter->next = temp; //iterin nexti tempi gostermesini sagladik ve araya node koymus olduk.
    temp->data = 99;
}

Node *elemanSilme(Node *root,int data)
{
    Node *temp;
    Node *iter = root;

    if(root -> data == data) //aradigim degeri root da olma ihtimalini kontrol et.
    {
            while(iter -> next != root)
            {
                iter = iter -> next;
            }
        iter->next = root -> next;
        free(root);
        return iter -> next;
    }

    while(iter -> next != root && iter -> next -> data != data) //link liste bastan sona kadar arayipta bulamama durumu
    {
        iter = iter -> next;
    }
    if(iter -> next == root) //eger bulamadi ise printf ile yazdir ve return root yap.
    {
        printf("Sayi bulunamadi...\n");
        return root;
    }
    temp = iter -> next; //temp silmek istedigimiz dugumu gosterecek.
    iter -> next = iter -> next -> next; //iterin nexti nextinin nextini gostericek ki arada dugum ile baglantisi olmasın.
    free(temp); //silmek istedigimiz node bellekten temizledik.
    return root;
}
