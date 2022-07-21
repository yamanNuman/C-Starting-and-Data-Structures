#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

struct linked_list
{
    int data;
    struct linked_list *next;
};

typedef struct linked_list Node;

Node *head = NULL;
Node *tail = NULL;

void printLinkedList();
void createLinkedList(); //dugumun data bilgisinin girisi.
void insertAtLast(int value);
void insertAtFirst(int value);
void insertAfter(int key,int value);
void searchNode(int value);
void deleteNode(int value);

int main()
{
    int key,value;

    //create linked list
    printf("Create Linked List.\n");
    createLinkedList();
    printLinkedList();

    //listenin sonuna eleman eklemek icin
    printf("\nInsert new item at last\n");
    scanf("%d",&value);
    insertAtLast(value);
    printLinkedList();

    //listenin basina eleman eklemek icin.
    printf("\nInsert new item at first\n");
    scanf("%d",&value);
    insertAtFirst(value);
    printLinkedList();

    //Tanimli bir degerden sonraya eleman ekleme
    printf("\nEnter a KEY(existing item of list),after that you want to insert a value\n");
    scanf("%d",&key);
    printf("\nInsert new item after %d KEY\n",key);
    scanf("%d",&value);
    insertAfter(key,value);
    printLinkedList();

    //arama yapmak icin
    printf("Enter an item to search it from list\n");
    scanf("%d",&value);
    searchNode(value);

    //silme yapmak icin
    printf("Enter an item to delete it from list\n");
    scanf("%d",&value);
    deleteNode(value);
    printLinkedList();

    getch();
}

void createLinkedList()
{
    int value;

    while(1)
    {
        printf("Input a number.(Enter -1 to exit) : ");
        scanf("%d",&value);

        if(value == -1) //girilen deger -1 ise donguyu kırar.
        {
            break;
        }
        insertAtLast(value); //girilen data bilgisini gonderir. Sona ekleme islemine gonderir.
    }
}

void insertAtLast(int value) //sona eklemek icin.
{
    Node *temp_node = (Node*) malloc(sizeof(Node));

    temp_node -> data = value; //olusturulan gecici dugumun datasina value atadi.
    temp_node -> next = NULL; // next pointeri null gosterdi. Segmentaion fault olmaması icin.

    if(head == NULL) //liste bos ise
    {
        head = temp_node; //bas ve sona olusturulan yeni dugumu gosteriyor.
        tail = temp_node;
    }
    else
    {
        tail -> next = temp_node; //eger listede eleman var ise kuyrugun next pointeri temp_node gosterir.
        tail = temp_node; // yeni kuyruk temp_node olur.
    }
}

void insertAtFirst(int value) //basa eklemek icin.
{
    Node *temp_node = (Node*) malloc(sizeof(Node)); //bellek tahsisi yapildi.
    temp_node -> data = value; //data bilgisine value degeri atandi.
    temp_node -> next = head; //yeni head temp_node oldu.

    head = temp_node; //yeni head temp_node oldu.
}

void printLinkedList()
{
    printf("\nYour full linked list is\n");

    Node *myList;
    myList = head;

    while(myList != NULL)
    {
        printf("%d  ",myList->data);
        myList = myList -> next;
    }
    puts("");
}

void insertAfter(int key,int value) //belli bir degerden sonrasina eleman ekleme
{
    Node *myNode = head;
    int flag = 0;

    while(myNode != NULL)
    {
        if(myNode -> data == key)
        {
            Node *newNode = (Node*) malloc(sizeof(Node));
            newNode -> data = value;
            newNode -> next = myNode -> next;
            myNode -> next = newNode;

            printf("%d is inserted after %d\n",value,key);

            flag = 1;

            break;
        }
        else
        {
            myNode = myNode -> next;
        }
        if(flag == 0)
        {
            printf("Key not found!\n");
        }
    }
}

void searchNode(int value)
{
    Node *searchNode = head;
    int flag = 0;

    while(searchNode != NULL)
    {
        if(searchNode -> data == value)
        {
            printf("%d is present in this list.Memory address is %d\n",value,searchNode);
            flag = 1;
            break;
        }
        else
        {
            searchNode = searchNode -> next;
        }
    }

    if(flag == 0)
    {
        printf("Node not found.\n");
    }
}

void deleteNode(int value)
{
    Node *myNode = head;
    Node *previous = NULL;

    int flag = 0;

    while(myNode != NULL)
    {
        if(myNode -> data == value)
        {
            if(previous == NULL)
            {
                head = myNode -> next;
            }
            else
            {
                previous -> next = myNode -> next;
            }
            printf("%d is deleted from list\n",value);

            flag = 1;
            free(myNode);
            break;
        }
        previous = myNode;
        myNode = myNode -> next;
    }
    if(flag == 0)
    {
        printf("Node not found.\n");
    }
}