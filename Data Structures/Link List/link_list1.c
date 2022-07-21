#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

typedef struct temp
{
    int item;
    struct temp *next;
}Node;

typedef struct
{   
    Node *head;
    Node *tail;
}List;

void initList(List *lp);
Node *createNode(int item);
void addAtTail(List *lp,int item);
int delFromTail(List *lp);
void addAtHead (List *lp,int item);
int deleteAtHead(List *lp);
void printList(List *lp);
void arayaEkle(List *lp,int item);

int main()
{
    List *lp;

    int item = 0;

    lp = (List*) malloc(sizeof(List));

    initList(lp);

    addAtTail(lp,10);
    addAtTail(lp,20);
    addAtHead(lp,30);
    addAtHead(lp,40);
    addAtHead(lp,50);
    printList(lp);
    printf("\n");
    arayaEkle(lp,100);

    printList(lp);

    getch();
}

void initList(List *lp)
{
    lp->head = NULL;
    lp->tail = NULL;
}

Node *createNode(int item)
{
    Node *nNode = (Node*) malloc(sizeof(Node));

    nNode -> item = item;
    nNode -> next = NULL;

    return nNode;
}

void addAtTail(List *lp,int item)
{
    Node *node;
    node = createNode(item);

    if(lp->head == NULL)
    {
        lp -> head = node;
        lp -> tail = node;
    }
    else
    {
        lp -> tail -> next = node;
        lp -> tail = lp -> tail -> next;
    }
}

int delFromTail(List *lp)
{
    Node *temp;
    int i = 0;

    int item = 0;

    if(lp -> tail == NULL)
    {
        printf("Empty List..");
        return -1;
    }
    else
    {
        temp = lp -> head;

        while(temp -> next != lp->tail)
        {
            temp = temp -> next;
        }

        item = lp -> tail -> item;

        lp -> tail = temp;
        lp -> tail -> next = NULL;
    }
    
    return item;
}

void addAtHead (List *lp,int item)
{
    Node *node;
    node = createNode(item);

    if(lp -> head == NULL)
    {
        lp -> head = node;
        lp -> tail = node;
    }
    else
    {
        node -> next = lp -> head;
        lp -> head = node;
    }
}

int deleteAtHead(List *lp)
{
    int item = 0;

    if(lp -> head == NULL)
    {
        printf("Empty List...");
        return -1;
    }
    else
    {
        item = lp -> head -> item;
        lp -> head = lp -> head -> next;
    }
    
    return item;
}

void printList(List *lp)
{
    Node *node;

    if(lp -> head == NULL)
    {
        printf("Empty List...");
    }
    
    node = lp -> head;

    while(node != NULL)
    {
        printf("%d  ",node -> item);
        node = node -> next;
    }
}

void arayaEkle(List *lp,int item)
{
    Node *iter = lp -> head;

    for(int i = 0; i = 0 ; i++)
    {
        iter = iter -> next;
    }
    Node *temp;
    temp = createNode(item);

    temp -> next = iter -> next;
    iter -> next = temp;
}