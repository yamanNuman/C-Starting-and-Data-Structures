#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

typedef struct node //struct node tipinde bir veritipi olusturma typedef(yeni bir veri tipi olusturur.)
{
    int data; // node'un veri bilgisi
    struct node  *next; // node'un sonraki node gostercek olan pointeri.

}Node;

Node *iter = NULL; 

void push(int data);
int pop();
void printStack();

int main()
{
    push(10);
    push(20);
    push(30);
    printStack();
    pop(30);
    printStack();
    push(40);
    printStack();

    getch();
}

void push(int data)
{
    if(iter == NULL) // iter null ise
    {
        iter = (Node*) malloc(sizeof(Node)); //yeni bir node olustur ve iter bu olsun.
        iter -> next = NULL; //iterin pointer kismi null deger gostersin.
    }

    iter -> data = data; //iterin datasına gonderilen datayi atadik.
    Node *newNode = (Node*) malloc(sizeof(Node)); //yeni dugum olusturduk.
    newNode -> next = iter; //olusturulan bu yeni dugum suan bos. bu dugumun nexti iteri gostersin.
    iter = newNode; //daha sonra bu yeni dugum artik iter olsun dedik.
}

int pop()
{
    if(iter -> next == NULL)
    {
        return -1;
    }
    int result = iter -> next -> data;
    Node *temp = iter;
    iter = iter -> next;
    free(temp); //en basta eleman eklemek icin kullanilan bos node u hafizaan silmek bedava yer kaplamasin. 

    return result;
}

void printStack()
{
    printf("\nStack Icerigi : ");
    Node *temp = iter -> next;
    while(temp != NULL)
    {
        printf("%d  ",temp -> data);
        temp = temp -> next;
    }
}