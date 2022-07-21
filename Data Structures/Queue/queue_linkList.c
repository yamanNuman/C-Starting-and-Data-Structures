#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

typedef struct node
{
    int data;
    struct node *next;
}Node;

Node *root = NULL;
Node *tail = NULL;

void enqueue(int data);
int dequeue();
void printLinkList();

int main()
{
    enqueue(10);
    enqueue(20);
    enqueue(30);
    printLinkList();
    printf("\n%d\n",dequeue());
    printf("%d\n",dequeue());
    printLinkList();
    printf("%d\n",dequeue());
    printLinkList();

    getch();
}

void enqueue(int data)
{
    if(root == NULL)
    {
        root = (Node*) malloc(sizeof(Node)); //null ise link list bos ise dugum olsutur.
        root -> data = data; //datasini yaz.
        root -> next = NULL; //segmantain fault hatasi icin
        tail = root; //ilk elemanda kuyruk ve root aynı yeri gostermis olur.
    }
    else
    {
        tail -> next = (Node*) malloc(sizeof(Node)); //en basta tek elelman var iken tail ve root onu gosteriyor ancak eleman eklendigi zaman root ilk elemani 
        //tail en son elemani gosterir. O yüzden eleman eklenecegi zaman yeni bir dugum olusturduk ve tailin nexti o dugumu gosteriyor oldu artik
        tail -> next -> data = data; //kuyrugun nextinin datasina datayi yazdik.
        tail = tail -> next; // yeni kuyrugumuz son kuyurugumunz nexti oldu.
        tail -> next = NULL; //son eleman null deger gostermeli yoksa segmantaion fault hatasi aliriz.
    }
}

int dequeue()
{
    if(root == NULL)
    {
        printf("Empty Link List..");
        return -1;
    }
    int rvalue = root -> data; //rvalue degerine rootun datasını attık cunku silme isleminde neyin silindigini gostermek icin dequeue de return yapicaz onu maine.
    Node *temp = root; //root ile temp aynı yeri gostericek cunku root degerimiz silme isleminde bir sonraki elemani gostercegi icin ilk elemani bellekten kaldirmak icin onu bir pointera atadik.
    root = root -> next; //artik root bir sonraki elemani gosteriyor cunku bir oncesi silinecek.Yani tekrardan ilk elemani gostermis olacak.
    free(temp); //tempe atadigimiz node bellekten kaldirdik.
    return rvalue; //ilk elemanin data degerini maine return ettik.
}

void printLinkList()
{
     printf("Link List : ");

        Node *iter = root;

        if(iter == NULL)
        {
            printf("Empty Link List.");
        }

        else
        {
            while(iter != NULL)
            {
            printf("%d  ",iter -> data);
            iter = iter->next;
            }
        }
}