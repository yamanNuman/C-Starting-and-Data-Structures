#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

typedef struct temp//Node yapisi olusturuldu.
{
    int data; //veri kismi
    struct temp *next; //diger node gosterecek pointer
}Node;

void add(Node *root,int data);
void print(Node *root);
void arayaEkle(Node *root);

int main()
{
    Node *root = (Node*) malloc(sizeof(Node)); //ilk node gostermesi icin root adinda bir pointer tanimlandi ve bellek tahsisi yapildi.
    root -> next = NULL; //rootun nexti NULL gösterildi.
    root -> data = 500; // veri kismina 500 atandi.

    for(int i = 0; i < 5; i++) // 5 tane yeni node olusturur.
    {
        add(root,i*10);
    }

    print(root);

    // for(int i = 0; i < 3; i++) //iter 3 kere hareket etmis oldu. 500 0 10 20 (suan 20 gosteriyor.)
    // {
    //     iter = iter->next;
    // }
    // Node *temp = (Node*) malloc(sizeof(Node)); //araya node koymak icin bir pointer daha olusturuldu.
    // temp->next = iter->next; //iterin nexti 30 u gosterir. tempi de oraya gösterdik.
    // iter->next = temp; //iterin nexti tempi gostermesini sagladik ve araya node koymus olduk.
    // temp->data = 100;

    arayaEkle(root);
    printf("\n");
    print(root);

    getch();
}

void add(Node *root,int data)
{
    while(root->next != NULL) //rootun nexti null olmadigi surece 
    {
        root = root->next; //root bir sonraki node gostermesi icin.
    }
    root->next = (Node*) malloc(sizeof(Node)); // rootun nextine bellek tahsisi yapildi.
    root->next->data = data;    //rootun nextinin datasına data degiskeni atandi.
    root->next->next = NULL; //rootun nextinin nexti null son node null olmazsa segmantaion fault hatassi verir.
}

void print(Node *root)
{
    while(root != NULL) //root null olmadigi surece dongu calissin.
    {
        printf("%d  ",root->data); //rootun gösterdigi node'un verisini bas.
        root = root->next; //bir sonraki node gostermesi icin.
    }
}

void arayaEkle(Node *root)
{
    Node *iter = root; //iteration rootun oldugu yere konumladik.

    for(int i = 0; i < 3; i++) //iter 3 kere hareket etmis oldu. 500 0 10 20 (suan 20 gosteriyor.)
    {
        iter = iter->next;
    }
    Node *temp = (Node*) malloc(sizeof(Node)); //araya node koymak icin bir pointer daha olusturuldu.
    temp->next = iter->next; //iterin nexti 30 u gosterir. tempi de oraya gösterdik.
    iter->next = temp; //iterin nexti tempi gostermesini sagladik ve araya node koymus olduk.
    temp->data = 99;
}